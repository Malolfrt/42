/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:06:30 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/26 16:54:04 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close_window(t_data *data, int i)
{
	mlx_destroy_image(data->mlx_ptr, data->img.img_0);
	mlx_destroy_image(data->mlx_ptr, data->img.img_1);
	mlx_destroy_image(data->mlx_ptr, data->img.img_e);
	mlx_destroy_image(data->mlx_ptr, data->img.img_c);
	mlx_destroy_image(data->mlx_ptr, data->img.img_p);
	if (data->win_ptr)
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	free_tab(data->map);
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	free(data);
	if (i == 1)
		ft_error("La map est trop grande", NULL);
	exit (0);
	return (0);
}

static int	on_keypress(int keycode, t_data *data)
{
	if (keycode == ESC)
		ft_close_window(data, 0);
	else if (keycode == UP)
		go_up(data);
	else if (keycode == RIGTH)
		go_right(data);
	else if (keycode == LEFT)
		go_left(data);
	else if (keycode == DOWN)
		go_down(data);
	return (0);
}

void	init_data_value(t_data *data)
{
	data->img.width = 100;
	data->img.height = 100;
	data->img.img_1 = mlx_xpm_file_to_image(data->mlx_ptr,
			"xpm/Brick100.xpm", &data->img.width, &data->img.height);
	data->img.img_0 = mlx_xpm_file_to_image(data->mlx_ptr,
			"xpm/sol100.xpm", &data->img.width, &data->img.height);
	data->img.img_c = mlx_xpm_file_to_image(data->mlx_ptr,
			"xpm/bones100.xpm", &data->img.width, &data->img.height);
	data->img.img_p = mlx_xpm_file_to_image(data->mlx_ptr,
			"xpm/crane100.xpm", &data->img.width, &data->img.height);
	data->img.img_e = mlx_xpm_file_to_image(data->mlx_ptr,
			"xpm/coeur100.xpm", &data->img.width, &data->img.height);
	data->compteur = 0;
	find_player(data);
}

void	so_long(char **map)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (free_tab(map));
	data->mlx_ptr = mlx_init();
	if (!data->mlx_ptr)
		return (free(data->map));
	map_init(map, data);
	init_data_value(data);
	ft_init_window(data);
	ft_put_map_to_window(data);
	// mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img.img_p, data->img.width, data->img.height);
	return ;
	mlx_hook(data->win_ptr, DestroyNotify, StructureNotifyMask,
		&ft_close_window, data);
	mlx_hook(data->win_ptr, KeyPress, KeyPressMask, on_keypress, data);
	mlx_loop(data->mlx_ptr);
	// ft_close_window(data, 0);
	return ;
}
