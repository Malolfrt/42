/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:50:45 by malo              #+#    #+#             */
/*   Updated: 2024/01/03 17:17:35 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		if (s2[i] == s1[j])
			j++;
		i++;
	}
	if (s1[j] == '\0')
		ft_putstr(s1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
// int	ft_strchr(char *str, char c, int i)
// {
// 	int	len;

// 	if (i != 0)
// 	{
// 		while (str[i])
// 		{
// 			if (str[i] == c)
// 				return (1);
// 			i++;
// 		}
// 		return (0);
// 	}
// 	else
// 	{
// 		len = 0;
// 		while (len < i)
// 		{
// 			if (str[len] == c)
// 				return (1);
// 			len++;
// 		}
// 		return (0);
// 	}
// }


// int	main(int ac, char **av)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;

// 	if (ac == 3)
// 	{
// 		while (av[2][j])
// 			if (av[2][j++] == av[1][i])
// 				i += 1;
// 		if (!av[1][i])
// 			ft_putstr(av[1]);
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }