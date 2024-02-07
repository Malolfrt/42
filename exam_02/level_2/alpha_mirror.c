/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:32:37 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 15:55:15 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int		i;
	int		j;
	char	*base;
	char	*basemaj;

	i = 0;
	base = "0abcdefghijklmnopqrstuvwxyz";
	basemaj = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (str[i])
	{
		j = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			while (str[i] != base[j])
				j++;
			j = 27 - j;
			str[i] = base[j];
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			while (str[i] != basemaj[j])
				j++;
			j = 27 - j;
			str[i] = basemaj[j];
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
	return (0);
}