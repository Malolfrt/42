/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:24:27 by mlefort           #+#    #+#             */
/*   Updated: 2024/03/01 11:42:41 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**get_path(char **env)
{
	char	**tab;

	int (i) = 0;
	while (env[i])
	{
		if (ft_strncmp(env[i], "PATH", 4) == 0)
			break ;
		i++;
	}
	if (env[i] == NULL)
		return (NULL);
	tab = ft_split(env[i] + 5, ':');
	if (!tab)
		return (NULL);
	return (tab);
}

// char	*cpy_cmd(char *env, char *cmd)
// {
// 	char	*cmd_cpy;

// 	cmd_cpy = malloc(sizeof(char)
// 			* ((ft_strlen(env) + ft_strlen(cmd)) + 2));
// 	if (!cmd_cpy)
// 		return (NULL);
// 	cmd_cpy = ft_strjoin(env, "/");
// 	cmd_cpy = ft_strjoin(cmd_cpy, cmd);
// 	return (cmd_cpy);
// }

void	parsing(char *cmd, char **env)
{
	char	**path;
	int		i;

	i = 0;
	path = get_path(env);
	while (path[i])
	{
		// path[i] = cpy_cmd(path[i], cmd);
		path[i] = ft_strjoin(path[i], "/");
		path[i] = ft_strjoin(path[i], cmd);
		// free(path[i]);
		ft_free_tab(path);
		return ;
		if (access(path[i], F_OK) != -1)
			break ;
		i++;
	}
	if (path[i] == NULL)
	{
		ft_free_tab(path);
		ft_error("Commande introuvable");
	}
	ft_free_tab(path);
}


void	check_access(char *fileinput, char *fileoutput)
{
	if (access(fileinput, F_OK) == -1)
	{
		perror("fileinput 1");
		exit(1);
	}
	if (access(fileinput, W_OK) == -1)
	{
		perror("fileinput 2");
		exit(1);
	}
	if (access(fileinput, R_OK) == -1)
	{
		perror("fileinput 3");
		exit(1);
	}
	if (access(fileoutput, F_OK) != -1)
	{
		if (access(fileoutput, W_OK | R_OK) == -1)
		{
			perror("fileoutput");
			exit(1);
		}
	}
}

void	open_fileoutput(char *fileoutput)
{
	int	fd;

	if (access(fileoutput, F_OK) == -1)
	{
		fd = open(fileoutput, W_OK | O_CREAT | O_TRUNC, 0644);
		if (fd == -1)
		{
			perror("Fileoutput");
			return ;
		}
		else
			close(fd);
	}
	return ;
}

