/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:01:35 by malo              #+#    #+#             */
/*   Updated: 2024/01/09 12:25:24 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

char	*ft_strcpy_v2(char *str, char **tab, int i)
{
	int	len;
	int	j;

	len = 0;
	while (str[len] && str[len] >= 33)
		len++;
	tab[i] = malloc(sizeof(char) * (len + 1));
	if (!tab[i])
		return (NULL);
	j = 0;
	while (j < len)
	{
		tab[i][j] = str[j];
		j++;
	}
	tab[i][j] = '\0';
	return (tab[i]);

}

char	**ft_split_v2(char *str)
{
	int		len;
	int		i;
	char	**tab;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] && str[i] <= 32)
			i++;
		if (str[i] && str[i] >= 33)
			len++;
		while (str[i] && str[i] >= 33)
			i++;
	}
	tab = (char **)malloc(sizeof(char *) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*str && *str <= 32)
			str++;
		if (*str && *str >= 33)
			ft_strcpy_v2(str, tab, i);
		while (*str && *str >= 33)
			str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

int	main(int ac, char **av)
{
	char	**tab;
	int		i;

	i = 0;
	if (ac == 2)
	{
		tab = ft_split_v2(av[1]);
		while (tab[i])
			i++;
		i--;
		while (i >= 0)
		{
			ft_putstr(tab[i]);
			if (i > 0)
				write(1, " ", 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}