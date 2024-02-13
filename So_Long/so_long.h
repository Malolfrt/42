/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:36:10 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/13 20:21:47 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define ESC 65307
# define UP 119
# define DOWN 115
# define LEFT 97
# define RIGTH 100
# define WITDH 1200
# define HEIGTH 800

# include <unistd.h> // write, read...
# include <stdlib.h> // malloc, free...
# include <stdio.h> // printf...
# include <fcntl.h>	// open...
# include "mlx/mlx.h" // MLX...
# include "X11/X.h" // DestroyNotify, StructureNotify
# include "get_next_line.h" // Get Next Line...

typedef struct	s_data
{
	void	*mlx_ptr; // MLX pointer
	void	*win_ptr; // MLX window pointer
	void	*img_ptr; // MLX image pointers(on the stack)
	char	*addr;
	int		bit_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

/*		check_map.c		*/
char	**get_map(int fd);
int		check_map(char **tab);

/*		so_long_utils.c		*/
void	ft_strdup(char **new_str, char *str, int i);
int		ft_strcmp(char *s1, char *s2);
int		ft_strcmp_char(char c, char d);
int		ft_strlen_map(char *str);


/*		Get_Next_line.c		*/
char	*get_next_line(int fd);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strjoin(char *s1, char *s2);

#endif