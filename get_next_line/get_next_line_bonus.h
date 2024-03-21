/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:45:20 by mlefort           #+#    #+#             */
/*   Updated: 2024/03/21 12:10:57 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif