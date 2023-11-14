/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:36:15 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/14 18:15:50 by mlefort          ###   ########.fr       */
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
		if (p[i] == c)
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
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s", (char *)ft_memchr(tab, -1, 7));
}*/