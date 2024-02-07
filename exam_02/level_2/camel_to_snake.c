/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:55:43 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 16:16:01 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


char	*camel_to_snake(char *str)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	temp = malloc(sizeof(char) * 1000);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			temp[j] = '_';
			j++;
			str[i] += 32;
			temp[j] = str[i];
		}
		temp[j] = str[i];
		i++;
		j++;
	}
	return (temp);
}

int	main(int ac, char **av)
{
	char	*res;
	
	res = malloc(sizeof(char) * 1000);
	if (!res)
		return (0);
	if (ac == 2)
	{
		res = camel_to_snake(av[1]);
		putstr(res);
	}
	write(1, "\n", 1);
	return (0);
}