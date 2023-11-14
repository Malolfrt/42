/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:29 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/14 19:55:25 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != c)
	{
		if (c == '\0')
			return (NULL);
	i--;
	}	
	return ((char *)s);
}

/*int	main(void)
{
	const char	*s1 = "voici la fonction strrchr";
	char		*res;

	printf("string :%s\n", s1);
	res = ft_strrchr(s1, 'r');
	printf ("%p : %s", res, res);
	return (0);
}*/