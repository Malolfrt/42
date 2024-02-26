/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:05:43 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/26 16:22:33 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	find_player(t_data *data)
{
	int	j;

	int (i) = 0;
	data->exit = true;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'P')
			{
				data->x = i;
				data->y = j;
			}
			if (data->map[i][j] == 'C')
				data->exit = false;
			j++;
		}
		i++;
	}
}

// static void	ft_victoire(t_data	*data)
// {
// 	write(1, "Tu as gagner\n", 13);
// 	ft_close_window(data, 0);
// }

// static void	ft_check_exit_right(t_data *data, int i, int j)
// {
// 	if (data->exit == false)
// 	{
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
// 			data->img.img_p, ((j + 1) * 100), (i * 100));
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
// 			data->img.img_e, (100 * j), (100 * i));
// 		data->map[i][j + 1] = 'P';
// 	}
// 	else if (data->exit == true)
// 	{
// 		data->map[i][j + 1] = '0';
// 		go_right(data);
// 		ft_victoire(data);
// 	}
// }

// static void	old_exit_go_right(t_data *data, int i, int j)
// {
// 	if (data->map[i][j + 1] != '1')
// 	{
// 		data->img.img = mlx_xpm_file_to_image(data->mlx_ptr,
// 				"xpm/crane100.xpm", &data->x, &data->y);
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
// 			data->img.img, ((j + 1) * 100), (i * 100));
// 		mlx_destroy_image(data->mlx_ptr, data->img.img);
// 		data->img.img = mlx_xpm_file_to_image(data->mlx_ptr,
// 				"xpm/coeur100.xpm", &data->x, &data->y);
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
// 			data->img.img, (100 * j), (100 * i));
// 		mlx_destroy_image(data->mlx_ptr, data->img.img);
// 		data->map[i][j + 1] = 'P';
// 		data->map[i][j] = 'E';
// 	}
// 	else
// 		return ;

// }

// void	go_right(t_data *data)
// {
// 	int	i;
// 	int	j;

// 	i = data->x;
// 	j = data->y;
// 	// if (i == data->old_i && j == data->old_j)
// 	// {
// 	// 	old_exit_go_right(data, i, j);
// 	// 	return ;
// 	// }
// 	if (data->map[i][j + 1] != '1' && data->map[i][j + 1] != 'E')
// 	{
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
// 			data->img.img_p, ((j + 1) * 100), (i * 100));
// 		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
// 			data->img.img_0, (100 * j), (100 * i));
// 		data->map[i][j + 1] = 'P';
// 		data->map[i][j] = '0';
// 		return ;
// 	}
// 	// else if (data->map[i][j + 1] == 'E')
// 	// {
// 	// 	ft_check_exit_right(data, i, j);
// 	// 	return ;
// 	// }
// 	else
// 		return ;
// }

void	go_up(t_data *data)
{
	int	i;
	int	j;

	i = data->x;
	j = data->y;
	if (data->map[i - 1][j] != '1')
	{
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
			data->img.img_p, (100 * j), ((i - 1) * 100));
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
			data->img.img_0, (100 * j), (100 * i));
		data->map[i - 1][j] = 'P';
		data->map[i][j] = '0';
	}
	else
		return ;
}

void	go_left(t_data *data)
{
	int	i;
	int	j;

	i = data->x;
	j = data->y;
	if (data->map[i][j - 1] != '1')
	{
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
			data->img.img_p, (100 * (j - 1)), (i * 100));
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
			data->img.img_0, (100 * j), (100 * i));
		data->map[i][j - 1] = 'P';
		data->map[i][j] = '0';
	}
	else
		return ;
}

void	go_down(t_data *data)
{
	int	i;
	int	j;

	i = data->x;
	j = data->y;
	if (data->map[i + 1][j] != '1')
	{
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
			data->img.img_p, (100 * j), ((i + 1) * 100));
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
			data->img.img_0, (100 * j), (100 * i));
		data->map[i + 1][j] = 'P';
		data->map[i][j] = '0';
	}
	else
		return ;
}

void	move_normal(t_data *data, int x, int y)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->img.img_p, y, x);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->img.img_0, data->y, data->x);
	data->compteur++;
	ft_printf("%d\n", data->compteur);
	// if (data->map[x][y] == 'E')
		// check_exit();
}

void	move_from_e(t_data *data, int x, int y)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->img.img_p, y, x);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->img.img_e, data->y, data->x);
	data->compteur++;
	ft_printf("%d\n", data->compteur);
}

void	go_right(t_data *data)
{
	if (data->map[data->x][data->y + 1] != '1')
	{
		if (data->map[data->x][data->y] == 'E')
		{
			move_from_e(data, data->x, (data->y + 1));
			data->y++;
		}
		else
		{
			move_normal(data, data->x, (data->y + 1));
			data->y++;
		}
	}
}

