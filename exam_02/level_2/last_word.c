/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:10:07 by malo              #+#    #+#             */
/*   Updated: 2024/01/03 13:32:36 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	len;
	int	end;

	len = 0;
	while (str[len])
		len++;
	len--;
	while (len > 0)
	{
		while (str[len] == 32 || str[len] == '\t')
			len--;
		if (str[len] != 32 || str[len] != '\t')
			end = len;
		while (str[len] >= 33)
			len--;
		len++;
		while (len <= end)
		{
			write(1, &str[len], 1);
			len++;
		}
		return ;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}