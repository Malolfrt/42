/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:08:45 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/25 22:46:52 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*str1 = "\x12\xff\x65\x12\xbd\xde\xad";
	const char	*str2 = "\x12\x02";
	int			res;
	int			restrue;

	res = strncmp(str1, str2, 1);
	res = ft_strncmp(str1, str2, 1);
	printf ("%d\n", res);
	printf ("%d\n", restrue);
	return (0);
}*/