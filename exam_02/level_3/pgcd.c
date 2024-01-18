/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:33:51 by malo              #+#    #+#             */
/*   Updated: 2024/01/05 20:59:48 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	pgcd(unsigned int a, unsigned int b)
{
	unsigned int	i;
	unsigned int	res;

	i = 1;
	while (i <= a || i <= b)
	{
		if (a % i == 0 && b % i == 0)
			res = i;
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	int	nb1;
	int	nb2;
	int	res;

	if (ac == 3)
	{
		nb1 = atoi(av[1]);
		nb2 = atoi(av[2]);
		res = pgcd(nb1, nb2);
		printf("%d", res);
	}
	printf("\n");
	return (0);
}

// void	pgcd(int nb1, int nb2)
// {
// 	int div;
// 	int pgcd;

// 	div = 1;
// 	if (nb1 <= 0 || nb2 <= 0)
// 		return ;
// 	while (div <= nb1 || div <= nb2)
// 	{
// 		if (nb1 % div == 0 && nb2 % div == 0)
// 			pgcd = div;
// 		div++;
// 	}
// 	printf("%d", pgcd);
// }

// int		main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		pgcd(atoi(argv[1]), atoi(argv[2]));
// 	printf("\n");
// 	return (0);
// }
