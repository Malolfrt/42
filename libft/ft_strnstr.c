/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:21:03 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/15 19:00:35 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	char	*bigtemp;

	i = 0;
	bigtemp = (char *)big;
	len1 = ft_strlen(little);
	if (len1 == 0 || big == little)
		return (bigtemp);
	while (i < len && bigtemp[i])
	{
		j = 0;
		while (bigtemp[j + i] == little[j]
			&& i + j < len && little[j] && bigtemp[i + j])
			j++;
		if (j == len1)
			return (bigtemp + i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*str1 = "aaabcabcd";
	const char	*str2 = "cd";
	char	*res;
	char  *restrue;

	res = ft_strnstr(str1, str2, 8);
	restrue = strstr(str1, str2);
	printf ("%s\n", res);
	printf ("%s\n", restrue);
	return (0);
}*/
