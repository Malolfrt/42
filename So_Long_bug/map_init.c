/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:30:06 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/26 16:44:11 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_init(char **tab, t_data *data)
{
	int		i;
	int		len;

	data->map = malloc(sizeof(char *) * (ft_tablen(tab) + 1));
	if (!data->map)
		return (free_tab(tab));
	i = 0;
	while (i < ft_tablen(tab))
	{
		len = ft_strlen(tab[i]);
		data->map[i] = malloc(sizeof(char) * (len + 1));
		if (!data->map[i])
			return (free_tab(data->map), free_tab(tab));
		data->map[i] = ft_strcpy(data->map[i], tab[i]);
		i++;
	}
	data->map[i] = NULL;
	free_tab(tab);
	return ;
}

void	ft_put_map_to_window(t_data *data)
{
	int	j;

	int (i) = 0;
	while (data->map[i])
	{
		printf("%s", data->map[i]);
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == '\n')
				break ;
			if (data->map[i][j] == '1')
				ft_wall(data, i, j);
		// 	if (data->map[i][j] == '0')
		// 		ft_open(data, i, j);
		// 	if (data->map[i][j] == 'P')
		// 		ft_player(data, i, j);
		// 	if (data->map[i][j] == 'C')
		// 		ft_collectible(data, i, j);
		// 	if (data->map[i][j] == 'E')
		// 		ft_exit(data, i, j);
			j++;
		}
		i++;
	}
}

void	ft_init_window(t_data *data)
{
	data->heigth = (ft_tablen(data->map) * 100);
	data->witdh = ((ft_strlen(data->map[0]) * 100) - 100);
	if (data->heigth > 1400 || data->witdh > 2500)
		ft_close_window(data, 1);
	data->win_ptr = mlx_new_window(data->mlx_ptr, data->witdh,
			data->heigth, "SO_LONG");
	if (!data->win_ptr)
		ft_close_window(data, 0);
	return ;
}

