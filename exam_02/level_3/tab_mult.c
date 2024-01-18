/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 22:02:54 by malo              #+#    #+#             */
/*   Updated: 2024/01/05 22:16:30 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_v8(int nb)
{
	if (nb > 9)
	{
		ft_putnbr_v8(nb / 10);
		ft_putnbr_v8(nb % 10);
	}
	else
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
}

int	ft_atoi_v8(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res *= 10;
			res = res + (str[i] - 48);
		}
		i++;
	}
	return (res);
}

void	tab_mult(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	while (i < 10)
	{
		ft_putnbr_v8(i);
		write(1, " * ", 3);
		ft_putnbr_v8(nb);
		write(1, " = ", 3);
		res = i * nb;
		ft_putnbr_v8(res);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	nb;

	if (ac == 2)
	{
		nb = ft_atoi_v8(av[1]);
		tab_mult(nb);
	}
	else
		write(1, "\n", 1);
	return (0);
}