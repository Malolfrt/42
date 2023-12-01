/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:42:25 by mlefort           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/30 13:41:31 by mlefort          ###   ########.fr       */
=======
/*   Updated: 2023/11/25 23:20:59 by malo             ###   ########.fr       */
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	fin;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	fin = ft_strlen(s1);
	start = 0;
<<<<<<< HEAD
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
=======
	while (s1[start] && ft_strchr(set, s1[start]))
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a
		start++;
	while (ft_strchr(set, s1[fin - 1]) && (s1[fin - 1] != '\0')
		&& (start < fin))
			fin--;
	len = (fin - start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	else
		ft_strlcpy(str, &s1[start], len + 1);
	return (str);
}
<<<<<<< HEAD
=======

/*int	main(void)
{
	char	*res;

	res = ft_strtrim("    xxx   tripouille  xxx", " x");
	printf ("%s\n", res);
	return (0);
}*/
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a
