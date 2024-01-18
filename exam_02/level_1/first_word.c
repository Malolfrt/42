/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 12:12:09 by malo              #+#    #+#             */
/*   Updated: 2023/12/29 12:20:56 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] <= ' ')
		i++;
	while (str[i] > ' ')
	{
		if (str[i + 1] <= ' ')
		{
			write(1, &str[i], 1);
			break ;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	write(1, "\n", 1);
	return (0);
}