/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:42:25 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/25 23:20:59 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	fin;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	fin = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (fin > start && ft_strchr(set, s1[fin - 1]))
		fin--;
	len = (fin - start);
	str = malloc(sizeof(*s1) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s1 + start), len + 1);
	return (str);
}

/*int	main(void)
{
	char	*res;

	res = ft_strtrim("    xxx   tripouille  xxx", " x");
	printf ("%s\n", res);
	return (0);
}*/
