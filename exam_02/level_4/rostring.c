/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:41:11 by malo              #+#    #+#             */
/*   Updated: 2024/01/09 13:13:03 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	start;
	int	end;
	int	len;

	len = 0;
	if (ac > 1 && av[1][0])
	{
		while (av[1][len] && av[1][len] <= 32)
			len++;
		start = len;
		while (av[1][len] && av[1][len] >= 33)
			len++;
		end = len - 1;
		while (av[1][len] && av[1][len] <= 32)
			len++;
		while (av[1][len])
		{
			while (av[1][len] && av[1][len] >= 33)
			{
				ft_putchar(av[1][len]);
				len++;
			}
			while (av[1][len] && av[1][len] <= 32)
				len++;
			write(1, " ", 1);
		}
		while (start <= end)
		{
			ft_putchar(av[1][start]);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}