/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:30:21 by malo              #+#    #+#             */
/*   Updated: 2024/01/03 14:48:20 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strchr(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	union_v1(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(s1, s1[i], i) == 0)
		{
			write(1, &s1[i], 1);
			i++;
		}
		else
			i++;
	}
	i = 0;
	while (s2[i])
	{
		if ((ft_strchr(s1, s2[i], ft_strlen(s1)) == 0)
			&& (ft_strchr(s2, s2[i], i) == 0))
		{
			write(1, &s2[i], 1);
			i++;
		}
		else
			i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		union_v1(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}