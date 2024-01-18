/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 12:23:31 by malo              #+#    #+#             */
/*   Updated: 2023/12/29 12:45:06 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	itoa(int i)
{
	if (i > 9)
	{
		itoa(i / 10);
		itoa(i % 10);
	}
	else
	{
		i += 48;
		ft_putchar(i);
	}
}

void	fizzbuzz(void)
{
	int	i;

	i = 0;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz\n", 9);
			i++;
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz\n", 5);
			i++;
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz\n", 5);
			i++;
		}
		else
		{
			itoa(i);
			write(1, "\n", 1);
			i++;
		}
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}
