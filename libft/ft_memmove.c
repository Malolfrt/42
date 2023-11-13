/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:05:55 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/13 17:40:55 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d < s && (dst || src))
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}

/*int main(void)
{
	char str1[50];
	char str2[50] = "mahmudul hasan";
	char *ret;

	ret = ft_memmove(str1, str2, 11);
	printf("%s", ret);
	return (0);
}*/

/*int	main(void)
{
	char	dest[50];
	char	*src = "success";

	printf ("before :%s\n", dest);
	ft_memmove(dest, src, 5);
	printf ("after :%s\n", dest);
	return (0);
}*/