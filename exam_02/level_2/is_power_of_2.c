/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:47:04 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 19:55:09 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 2;
	if (n == 1)
		return (1);
	while (i < n)
	{
		if (n % i == 0)
			i = i * i;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	res;

	res = is_power_of_2(256);
	printf("%d\n", res);
	return (0);
}