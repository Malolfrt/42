/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:30:57 by marvin            #+#    #+#             */
/*   Updated: 2024/02/12 11:30:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	wait_child(t_data *data, int ac)
{
	int	i;

	i = 0;
	while (i < (ac - 4))
	{
		waitpid(data->pid_tab[i], NULL, 0);
		i++;
	}
}

void	process1(t_data *data, char **env, int ac, char **av)
{
	char	*cmd;
	/*		lecture		*/
	if (data->nbfork == 0)
	{
		data->fd_infile = open(av[1], O_RDONLY, 0644);
		dup2(data->fd_infile, STDIN_FILENO);
		close(data->fd_infile);
	}
	else
	{
		if (data->nbfork % 2 == 0)
			dup2(data->pipe_impair[0], STDIN_FILENO);
		else
			dup2(data->pipe_pair[0], STDIN_FILENO);
	}
	close(data->pipe_pair[0]);
	close(data->pipe_impair[0]);
	/*		ecriture		*/
	if (data->nbfork == ac - 4)
	{
		data->fd_outfile = open(av[ac -1], O_WRONLY);
		dup2(data->fd_outfile, STDOUT_FILENO);
		close(data->fd_outfile);
	}
	else
	{
		if (data->nbfork % 2 == 0)
			dup2(data->pipe_pair[1], STDOUT_FILENO);
		else
			dup2(data->pipe_impair[1], STDOUT_FILENO);
	}
	close(data->pipe_impair[1]);
	close(data->pipe_pair[1]);
	cmd = get_path(data->cmds[data->nbfork], env);
	if (!cmd)
	{
		free(data->cmds);
		free(data->pid_tab);
		free(data);
		exit(0);
	}
	check_param(data->cmds[data->nbfork], data);
	execve(cmd, data->param, env);
}

void	pipex_init(int argc, char **argv, t_data *data)
{
	int	i;

	i = 0;
	data->fd_infile = open(argv[1], O_RDONLY);
	if (data->fd_infile == -1)
		exit_err(data, 0, "Erreur, vérifier l'infile");
	close(data->fd_infile);
	take_cmds(data, argv, argc);
	data->pid_tab = malloc(sizeof(pid_t) * (argc - 3));
	if (!data->pid_tab)
		exit_err(data, 1, "Erreur, Malloc Pid tab");
	while (i < argc - 3)
		data->pid_tab[i++] = 0;
	data->nbfork = 0;
	data->fd_outfile = open(argv[argc -1], O_WRONLY | O_TRUNC | O_CREAT, 0644);
	if (data->fd_outfile == -1)
		return ;

}

void	parents(t_data *data, pid_t pid)
{
	if (data->nbfork % 2 == 0)
	{
		close(data->pipe_impair[0]);
		close(data->pipe_impair[1]);
		pipe(data->pipe_impair);
	}
	else
	{
		close(data->pipe_pair[1]);
		close(data->pipe_pair[0]);
		pipe(data->pipe_pair);
	}
	data->pid_tab[data->nbfork] = pid;
}

int	main(int argc, char **argv, char **envp)
{
	t_data	*data;
	pid_t	pid;

	if (!envp || argc < 5)
		return (0);
	data = malloc(sizeof(t_data));
	if (!data)
		return (0);
	pipex_init(argc, argv, data);
	pipe(data->pipe_impair);
	pipe(data->pipe_pair);
	while ((data->nbfork) < (argc - 3))
	{
		pid = fork();
		if (pid == -1)
			exit_err(data, 2, "Erreur, fork");
		else if (pid == 0)
			process1(data, envp, argc, argv);
		else
			parents(data, pid);
		data->nbfork++;
	}
	ft_close(data);
	wait_child(data, argc);
	free(data->cmds);
	free(data->pid_tab);
	free(data);
}

