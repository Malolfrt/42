/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:33:17 by malo              #+#    #+#             */
/*   Updated: 2023/12/29 13:40:50 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] < 'n')
		{
			str[i] += 13;
			write(1, &str[i], 1);
		}
		else if (str[i] >= 'n' && str[i] <= 'z')
		{
			str[i] -= 13;
			write(1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] < 'N')
		{
			str[i] += 13;
			write(1, &str[i], 1);
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			str[i] -= 13;
			write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
	return (0);
}