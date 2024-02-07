/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:56:57 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 15:19:18 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *str, char *s1, int i)
{
	int	j;

	j = 0;
	while (1)
	{
		while (str[i] == s1[j])
		{
			if (str[i] != s1[j])
				return (0);
			i++;
			j++;
		}
		return (1);
	}
}


void	search_and_replace(char *str, char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == s1[j] && check(str, s1, i) == 1)
		{
			while (s2[j])
			{
				str[i] = s2[j];
				write (1, &str[i], 1);
				j++;
				i++;
			}
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
		search_and_replace(av[1], av[2],  av[3]);
	write(1, "\n", 1);
	return (0);
}
