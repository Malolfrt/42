/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:58:30 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/13 19:18:12 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_strdup(char **new_str, char *str, int i)
{
	int		len;

	len = ft_strlen(str);
	new_str[i] = malloc(sizeof(char) * (len + 1));
	if (!new_str || !new_str[i])
		return ;
	ft_strcpy(new_str[i], str);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] || s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int	ft_strcmp_char(char c, char d)
{
	if (d == '\n')
		return (0);
	return (c - d);
}

int	ft_strlen_map(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}
