/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:23:38 by malo              #+#    #+#             */
/*   Updated: 2024/01/05 15:33:13 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_v3(int i)
{
	if (i > 9)
	{
		ft_putnbr_v3(i / 10);
		ft_putnbr_v3(i % 10);
	}
	else
	{
		i = i + '0';
		write(1, &i, 1);
	}
}

int	main(int ac, char **av)
{
	(void)av;
	ft_putnbr_v3(ac - 1);
	write(1, "\n", 1);
	return (0);
}
