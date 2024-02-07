/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:50:19 by malo              #+#    #+#             */
/*   Updated: 2024/01/05 15:11:56 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strchr_v2(char c, char *str, int i)
{
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[i] && (!(s1[j + 1] == '\0')))
	{
		if (ft_strchr_v2(s1[j], s2, i) == 0)
		{
			write(1, "0", 1);
			return ;
		}
		else if (ft_strchr_v2(s1[j], s2, i) == 1)
			j++;
		i++;
	}
	write(1, "1", 1);
	return ;
}

int	main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}