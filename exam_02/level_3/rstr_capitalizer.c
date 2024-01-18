/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 21:14:21 by malo              #+#    #+#             */
/*   Updated: 2024/01/05 21:43:31 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	i;
	int	flg;

	i = 0;
	flg = 0;
	while (str[i])
	{
		if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
			flg = 1;
		if (flg == 0)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		else if (flg == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			flg = 0;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac >= 2)
	{
		while (av[i])
		{
			rstr_capitalizer(av[i]);
			i++;
			write(1, "\n", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}