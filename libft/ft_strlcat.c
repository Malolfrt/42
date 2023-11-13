/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:55:23 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/13 17:13:37 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	len = 0;
	while (dst[i] != '\0')
		i++;
	while (src[len] != '\0')
		len++;
	if (size <= i)
		len = len + size;
	else
		len = len + i;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len);
}

/*int	main(void)
{
	char	dest[300] = "123";
	char	src[500] = "4567891011";
	int		i;


	printf ("%s\n", dest);
	i = ft_strlcat(dest, src, 5);
	printf ("%s\n%d", dest, i);
	return (0);
}*/