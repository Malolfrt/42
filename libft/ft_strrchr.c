/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:29 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/15 17:40:00 by mlefort          ###   ########.fr       */
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