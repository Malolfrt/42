/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:55:12 by malo              #+#    #+#             */
/*   Updated: 2024/01/09 17:53:49 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
		|| tab[cur.y][cur.x] != to_fill)
		return ;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

char	**make_area(char **zone, t_point size)
{
	char	**new;
	int		i;
	int		j;

	new = malloc(sizeof(char *) * size.y);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size.y)
	{
		j = 0;
		new[i] = malloc(size.x + 1);
		while (j < size.x)
		{
			new[i][j] = zone[i][j];
			j++;
		}
		new[i][size.x] = '\0';
		i++;
	}
	return (new);
}

int	main(void)
{
	int		i;
	t_point	size = {8, 5};
	t_point	begin = {8, 5};
	char	*zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char	**area;

	area = make_area(zone, size);
	i = 0;
	while (i < size.y)
	{
		printf("%s\n", area[i]);
		i++;
	}
	i = 0;
	printf("*-*-*-*-*-*-*-*-*\n");
	flood_fill(area, size, begin);
	while (i < size.y)
	{
		printf("%s\n", area[i]);
		i++;
	}
	return (0);
}
