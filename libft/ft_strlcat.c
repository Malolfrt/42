/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:55:23 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/14 19:55:12 by mlefort          ###   ########.fr       */
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
	if (size > i)
		len = len + i;
	else
		len = len + size;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len);
}

/*size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	j;

	destlen = 0;
	srclen = 0;
	while (dst[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (size > destlen)
		srclen = srclen + destlen;
	else
		srclen = srclen + size;
	j = 0;
	while (src[j] && (destlen + 1) < size)
	{
		dst[destlen] = src[j];
		destlen++;
		j++;
	}
	dst[destlen] = '\0';
	return (srclen);
}*/

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
/*void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int		main(void)
{
	char	dest[500];

	memset(dest, 0, 15);
	memset(dest, 'r', 6);

	memset(dest, 'r', 15);
	ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	write(1, "\n", 1);
	write(1, dest, 15);
}*/