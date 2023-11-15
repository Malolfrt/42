/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:36:15 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/15 17:37:04 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	p = (void *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (char)c)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*str = "Hello, World!";
	int			search_char = 'W';
	const char	*result = ft_memchr(str, search_char, 10);

	if (result != NULL)
	{
		printf("Caractère trouvé à la position : %ld\n", result - str);
	}
	else
	{
		printf("Caractère non trouvé.\n");
	}
	return 0;
}*/

/*int	main(void)
{
	char tab[] = {0, 1, 2, 3, 4, 5};
	printf("%s", (char *)ft_memchr(tab, 2 + 256, 3));
}*/