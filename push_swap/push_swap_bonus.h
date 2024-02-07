/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:13:04 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/02 20:32:43 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include "push_swap.h"

int		match_op(t_stack **a, t_stack **b, char *line);
int		main(int ac, char **av);

/*	GET_NEXT_LINE	*/
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
