/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:29 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/16 15:45:30 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		if (c == '\0')
			return (NULL);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*s1 = "bonjour";
	char		*res;

	printf("string :%s\n", s1);
	res = ft_strrchr(s1, 'b');
	printf ("%p : %s", res, res);
	return (0);
}*/