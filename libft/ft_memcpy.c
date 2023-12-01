/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:19:09 by mlefort           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/30 12:33:36 by mlefort          ###   ########.fr       */
=======
/*   Updated: 2023/11/25 21:54:22 by malo             ###   ########.fr       */
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	dest = d;
	return (dest);
}
