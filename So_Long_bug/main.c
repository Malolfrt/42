/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:23:37 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/22 13:47:00 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	char	**map;

	if (ac > 2)
		return (0);
	check_name_ber(av[1]);
	map = get_map_init(av[1]);
	if (check_map(map))
		flood_file_start(map);
	so_long(map);
	return (0);
}