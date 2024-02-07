/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:38:25 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 17:49:12 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == *s1)
				return (char *)s1;
			j++;
		}
		s1++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*s1 = "ceci est un test";
	char	*s2 = "i";
	char	*res;

	res = ft_strpbrk(s1, s2);
	printf("%s\n", res);
	return (0);
}