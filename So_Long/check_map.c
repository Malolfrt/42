/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:39:52 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/13 20:02:42 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**get_map(int fd)
{
	char	**tab;
	char	*line;
	int		i;
	int		len;

	i = 0;
	line = get_next_line(fd);
	tab = (char **)malloc(sizeof(char *) * 100);
	while (line)
	{
		len = ft_strlen(line);
		tab[i] = malloc(sizeof(char) * (len + 1));
		if (!tab[i])
			return (0);
		tab[i] = ft_strcpy(tab[i], line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	close(fd);
	return (tab);
}

static int	check_wall(char	**map)
{
	int	len;
	int	i;

	len = 0;
	if (!map)
		return (0);
	while (map[len] != NULL)
		len++;
	len -= 1;
	i = 0;
	while (map[0][i])
	{
		if (ft_strcmp_char('1', map[0][i]) != 0)
			return (0);
		i++;
	}
	i = 0;
	while (map[len][i])
	{
		if (ft_strcmp_char('1', map[len][i]) != 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_rectangle(char **map)
{
	int	len;
	int	size;
	int	i;

	len = 0;
	while (map[len] != NULL)
		len++;
	size = ft_strlen_map(map[0]);
	i = 0;
	while (i < len)
	{
		if (ft_strlen_map(map[i]) != size)
			return (0);
		i++;
	}
	return (1);
}

int	check_valid(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		if (map[i][0] != '1' && map[i][ft_strlen_map(map[i])] != '1')
			return (0);
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != 'P' && map[i][j] != 'E' && map[i][j] != 'C'
				&& map[i][j] != '1' && map[i][j] != '0' && map[i][j] != '\n')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_map(char **map)
{
	if (!check_valid(map))
		return (0);
	if (!check_rectangle(map))
		return (0);
	if (!check_wall(map))
		return (0);
	return (1);
}
