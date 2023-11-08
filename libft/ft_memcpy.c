/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:20:10 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/08 15:27:54 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*strdest;
	unsigned const char	*strsrc;

	i = 0;
	strdest = dest;
	strsrc = src;
	while (i <= n)
	{
		strdest[i] = strsrc[i];
		i++;
	}
	dest = strdest;
	return (dest);
}

/*int	main(void)
{
	char	*src = "texte a copier";
	char	dest[50];
	char	*res;

	printf ("before : %s\n", dest);
	res = ft_memcpy(dest, src, 14);
	printf ("after : %s\n", res);
	return (0);
}*/
