/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:55:23 by mlefort           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/30 12:50:07 by mlefort          ###   ########.fr       */
=======
/*   Updated: 2023/11/25 23:16:42 by malo             ###   ########.fr       */
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	if (!dst && size == 0)
		return (0);
	i = 0;
<<<<<<< HEAD
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	j = lendst;
	if ((lendst < (size - 1)) && size > 0)
=======
	len = 0;
	if (size == 0 && dst == NULL)
		return (0);
	i = ft_strlen(dst);
	len = ft_strlen(src);
	if (size > i)
		len = len + i;
	else
		len = len + size;
	j = 0;
	while (src[j] && (i + 1) < size)
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a
	{
		while (src[i] && (lendst + i < (size - 1)))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (lendst >= size)
		lendst = size;
	return (lendst + lensrc);
}
