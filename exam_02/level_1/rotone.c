/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:41:48 by malo              #+#    #+#             */
/*   Updated: 2023/12/29 13:55:28 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] < 'z')
		{
			str[i] += 1;
			write(1, &str[i], 1);
		}
		else if (str[i] == 'z')
			write(1, "a", 1);
		else if (str[i] >= 'A' && str[i] < 'Z')
		{
			str[i] += 1;
			write(1, &str[i], 1);
		}
		else if (str[i] == 'Z')
			write(1, "A", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}