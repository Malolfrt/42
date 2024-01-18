/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:06:28 by malo              #+#    #+#             */
/*   Updated: 2023/12/29 13:25:01 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i];
			j = j - 97;
			while (j > 0)
			{
				write(1, &str[i], 1);
				j--;
			}
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i];
			j = j - 64;
			while (j > 0)
			{
				write(1, &str[i], 1);
				j--;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}
