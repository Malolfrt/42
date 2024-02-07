/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:04:16 by malo              #+#    #+#             */
/*   Updated: 2024/01/04 17:08:03 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] <= 32)
		i++;
	while (str[i])
	{
		if (str[i] <= 32)
			flag = 1;
		if (str[i] >= 33)
		{
			if (flag == 1)
				write(1, "   ", 3);
			flag = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		expand_str(av[1]);
	write(1, "\n", 1);
	return (0);
}