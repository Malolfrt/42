/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:42:39 by malo              #+#    #+#             */
/*   Updated: 2024/01/09 00:28:36 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_word(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] <= 32)
			i++;
		if (str[i] && str[i] >= 33)
			count++;
		while (str[i] && str[i] >= 33)
			i++;
	}
	return (count);
}

char	*put_in_tab(char *str)
{
	int		len;
	int		i;
	char	*res;

	len = 0;
	while (str[len] && str[len] >= 33)
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*clean_tab(char **tab, int i, char *str)
{
	tab[i] = put_in_tab(str);
	if (!tab[i])
	{
		free(tab[i]);
	}
	return (tab[i]);
}

char	**ft_split(char *str)
{
	int		len;
	char	**tab;
	int		i;

	len = count_word(str);
	tab = malloc(sizeof(char *) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*str && *str <= 32)
			str++;
		if (*str && *str >= 33)
			clean_tab(tab, i, str);
		while (*str && *str >= 33)
			str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	char	*test = "test de la fonction split jai reussi presque du 1 er coup bordel";
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split(test);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
