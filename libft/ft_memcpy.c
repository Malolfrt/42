/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:19:09 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/09 17:11:00 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (i <= n)
	{
		d[i] = s[i];
		i++;
	}
	dest = d;
	return (dest);
}

/*int main(void)
{
char *src = "texte a copier";
char dest[50];
char *true = "texte a copier";
char destrue[50];
char *res;
char *restrue;

printf ("before la mienne: %s\n", dest);
printf ("before la vrai: %s\n", destrue);
restrue = memcpy(destrue, true, 14);
res = ft_memcpy(dest, src, 14);
printf ("after la mienne : %s\n", res);
printf ("after la vrai : %s\n", restrue);
return (0);
}*/