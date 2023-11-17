/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:08:37 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/17 19:27:13 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*count_tab(char const *s, int c)
{
	int		i;
	int		i_temp;
	int		*count;

	i = 0;
	while (i < ft_strlen(s))
	{
		while (i < ft_strlen(s))
		{
			if (ft_strchr(c, s[i]) == NULL)
				break ;
			i++;
		}
		i_temp = i;
		while (i < ft_strlen(s))
		{
			if (ft_strchr(c, s[i]) != NULL)
				break ;
			i++;
		}
		if (i > i_temp)
			*count = *count + 1;
	}
	return (*count);
}

void	*cpy_tab(char const *s, int c)
{
	int		i;
	int		j;
	char	buff[50000];
	int		tab_index;
	char	*tab;

	i = 0;
	while (i < ft_strlen(s))
	{
		while (i < ft_strlen(s))
		{
			if (ft_strchr(c, s[i]) == NULL)
				break ;
			i++;
		}
		j = 0;
		while (i < ft_strlen(s))
		{
			if (ft_strchr(c, s[i]) != NULL)
				break ;
			buff[j] = s[i];
			j++;
			i++;
		}
		if (j > 0)
		{
		buff[j] = '\0';
		tab[tab_index] = malloc(sizeof(char *) * (ft_strlen(buff)));
		tab_index++;
		}
	}
}

char	**ft_split(char const *s, char c);
//**tab = malloc(char *) * (*count)