/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:25:32 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/29 19:21:58 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "unistd.h" // write, read, fork...
# include "fcntl.h" // open, close...
# include "stdlib.h" // malloc, free...
# include "stdio.h" // perror...
# include "sys/wait.h" // perror...
# include "../libft/libft.h" // LIBFT, ft_printf, Get_Next_line...

/*		pipex.c		*/
int		main(int ac, char **av, char **env);
void	check_access(char *fileinput, char *fileoutput);
void	open_fileoutput(char *fileoutput);
char	*cpy_cmd(char *env, char *cmd);
void	parsing(char *cmd, char **env);
char	**get_path(char **env);
void	ft_error(char *str);


#endif