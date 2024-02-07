/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:09:58 by malo              #+#    #+#             */
/*   Updated: 2024/01/06 18:04:18 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int nb)
{
	int	i;
	int	flg;

	i = 1;
	flg = 0;
	if (nb == 1)
	{
		printf("1");
		return ;
	}
	while (i <= nb)
	{
		if (is_prime(i) == 1 && nb % i == 0)
		{
			printf("%d", i);
			nb = nb / i;
			i = 1;
			if (nb <= i)
				return ;
			flg = 1;
		}
		if (flg == 1)
			printf("*");
		flg = 0;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}

