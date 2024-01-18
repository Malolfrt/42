/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:18:35 by malo              #+#    #+#             */
/*   Updated: 2024/01/04 15:32:54 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_v2(int nb)
{
	if (nb > 9)
	{
		ft_putnbr_v2(nb / 10);
		ft_putnbr_v2(nb % 10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}

int	ft_atoi_v3(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - 48);
		i++;
	}
	return (res);
}

int	is_prime(int number)
{
	int	i;

	i = 2;
	if (number <= 1)
		return (0);
	while (i < number)
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime_sum(char *str)
{
	int	res;
	int	nb;

	nb = ft_atoi_v3(str);
	res = 0;
	while (nb > 0)
	{
		if (is_prime(nb) == 1)
			res += nb;
		nb--;
	}
	ft_putnbr_v2(res);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		add_prime_sum(av[1]);
	write(1, "\n", 1);
	return (0);
}