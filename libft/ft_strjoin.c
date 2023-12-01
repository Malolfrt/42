/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:43:26 by malo              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/30 12:33:01 by mlefort          ###   ########.fr       */
=======
/*   Updated: 2023/11/25 23:00:52 by malo             ###   ########.fr       */
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	size;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	size = len1 + len2;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, (len1 + 1));
	ft_strlcat(str, s2, (size + 1));
	return (str);
}
