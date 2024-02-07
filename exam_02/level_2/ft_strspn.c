/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:45:58 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 19:33:46 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*s1 = "test";
	char	*accept = "vsvsgrzopllzeztsq";
	size_t	i;

	i = ft_strspn(s1, accept);
	return (0);
}
