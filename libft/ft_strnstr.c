/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:21:03 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/13 20:58:01 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0)
		return (0);
	if (little == (void *) '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] == big[j + i])
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
		j++;
		}
		i++;
	}
	return ((char *)big);
}

/*int	main(void)
{
	const char	*str1 = "hello world, worldwideweb on va voir";
	const char	*str2 = "wide";
	const char	*res;

	res = ft_strnstr(str1, str2, 19);
	printf ("%s\n", res);
	return (0);
}*/
