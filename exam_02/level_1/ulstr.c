/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:22:34 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 15:28:46 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			j++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z' && j == 0)
			str[i] = str[i] + 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ulstr(av[1]);
	write(1, "\n", 1);
	return (0);
}