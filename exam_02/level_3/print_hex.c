/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 21:00:58 by malo              #+#    #+#             */
/*   Updated: 2024/01/05 21:12:46 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi_v12(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10;
			res = res + (str[i] - 48);
		}
		i++;
	}
	return (res);
}

void	print_hex(int	nb)
{
	char	*digit;
	char	res;

	digit = "0123456789abcdef";
	if (nb > 15)
	{
		print_hex(nb / 16);
		print_hex(nb % 16);
	}
	else
	{
		res = digit[nb];
		write(1, &res, 1);
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = ft_atoi_v12(av[1]);
		print_hex(i);
	}
	write(1, "\n", 1);
	return (0);
}