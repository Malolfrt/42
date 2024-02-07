/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:04:52 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 17:32:07 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// int	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// size_t	ft_strcspn(const char *s, const char *reject)
// {
// 	size_t	i;
// 	size_t	res;

// 	i = ft_strlen(reject);
// 	res = 0;
// 	while (s[i])
// 	{
// 		i++;
// 		res++;
// 	}
// 	return (res);
// }

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char	*s = "ceci est un test";
	char	*reject = "un";
	size_t	res;

	res = ft_strcspn(s, reject);
	printf("%d\n", (int)res);
	return (0);

}