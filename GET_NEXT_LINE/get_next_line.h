/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:45:56 by mlefort           #+#    #+#             */
/*   Updated: 2023/12/06 21:31:40 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

char	*get_next_line(int fd);
char	*read_and_stash_v1(int fd, char *stash);
char	*ft_put_stash_in_line(char *stash, char *line);

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strcat(char *dst, const char *src);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);

#endif