/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:06:30 by mlefort           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/02/13 20:11:43 by mlefort          ###   ########.fr       */
=======
/*   Updated: 2024/02/10 22:00:41 by mlefort          ###   ########.fr       */
>>>>>>> 6e62563666dcac6ce93e13f92231f665be1fe5bd
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// static void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
// {
// 	char	*dst;

// 	dst = data->addr + (y * data->line_length + x * (data->bit_per_pixel / 8));
// 	*(unsigned int*)dst = color;
// }

// static int	ft_close_window(t_data *data)
// {
// 	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
// 	mlx_destroy_display(data->mlx_ptr);
// 	free(data->mlx_ptr);
// 	exit (1);
// 	return (0);
// }

// static int	on_keypress(int keycode, t_data *data)
// {
// 	printf("%d\n", keycode);
// 	if (keycode == ESC)
// 		ft_close_window(data);
// 	// if (keycode == UP)
// 	// 	ft_go_up();
// 	// if (keycode == down)
// 	// 	ft_go_down();
// 	// if (keycode == LEFT)
// 	// 	ft_go_left();
// 	// if (keycode == RITGH)
// 	// 	ft_go_rigth();
// 	return (0);
// }

// static int	mouse_hook(int mousecode, t_data *data)
// {
// 	printf("%d\n", mousecode);
// 	(void)data;
// 	if (mousecode == 1)
// 		printf("left");
// 	return (0);
// }

int	main(int ac, char **av)
{
<<<<<<< HEAD
	int		fd;
	char	**map;
	(void)ac;

	fd = open(av[1], O_RDONLY);
	map = get_map(fd);
	if (check_map(map))
		printf("Valid Map\n");
	else
		printf("Invalid Map\n");
	// t_data	data;

	// int (x) = 500;
	// int (y) = 500;

	// data.mlx_ptr = mlx_init();
	// if (!data.mlx_ptr)
	// 	return (1);
	// data.win_ptr = mlx_new_window(data.mlx_ptr, WITDH, HEIGTH, "SO_LONG");
	// if (!data.win_ptr)
	// 	return (free(data.mlx_ptr), 1);
	// mlx_key_hook(data.win_ptr, &on_keypress, &data);
	// mlx_mouse_hook(data.win_ptr, &mouse_hook, &data);
	// mlx_hook(data.win_ptr, DestroyNotify, StructureNotifyMask,
	// 	&ft_close_window, &data);
	// data.img_ptr = mlx_xpm_file_to_image(data.mlx_ptr, "xpm/ring2test2.xpm", &x, &y);
	// mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, data.img_ptr, 0, 0);
	// data.img_ptr = mlx_xpm_file_to_image(data.mlx_ptr, "xpm/Mike200.xpm", &x, &y);
	// mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, data.img_ptr, 500, 150);

	// mlx_loop(data.mlx_ptr);
=======
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	exit (1);
	return (0);
}

static int	on_keypress(int keycode, t_data *data)
{
	printf("%d\n", keycode);
	if (keycode == ESC)
		ft_close_window(data);
	// if (keycode == UP)
	// 	ft_go_up();
	// if (keycode == down)
	// 	ft_go_down();
	// if (keycode == LEFT)
	// 	ft_go_left();
	// if (keycode == RITGH)
	// 	ft_go_rigth();
	return (0);
}

int	main(void)
{
	t_data	data;

	data.mlx_ptr = mlx_init();
	if (!data.mlx_ptr)
		return (1);
	data.win_ptr = mlx_new_window(data.mlx_ptr, 1240, 590, "SO_LONG");
	if (!data.win_ptr)
		return (free(data.mlx_ptr), 1);
	mlx_key_hook(data.win_ptr, &on_keypress, &data);
	mlx_hook(data.win_ptr, DestroyNotify, StructureNotifyMask,
		&ft_close_window, &data);
	mlx_loop(data.mlx_ptr);
>>>>>>> 6e62563666dcac6ce93e13f92231f665be1fe5bd
	return (0);
}
