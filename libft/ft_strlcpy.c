/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:55:47 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/13 16:51:43 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
		if (size < 1)
			return (len);
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i + 1] = '\0';
	return (len + 1);
}

/*int	main(void)
{
	char	dst[50];
	char	*src = "12345679";
	int		res;

	res = ft_strlcpy(dst, src, 5);
	printf ("%d\n", res);
	return (0);
}*/