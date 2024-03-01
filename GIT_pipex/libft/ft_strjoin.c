/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:43:26 by malo              #+#    #+#             */
/*   Updated: 2024/03/01 12:04:08 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_join(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

static void	ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	if (!src)
		return ;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ;
}

static void	ft_strcat(char *dst, char *src)
{
	int	i;
	int	len;

	i = 0;
	if (!src)
		return ;
	len = ft_strlen(dst);
	while (src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[i + len] = '\0';
}


char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen_join(s1) * ft_strlen_join(s2)) + 1));
	if (!str)
		return (NULL);
	else
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
	}
	free(s1);
	return (str);

}

// int	main(int ac, char **av)
// {
// 	// char	*str1;
// 	// char	*str2;
// 	char	*res;

// 	(void)ac;

// 	res = ft_strjoin(av[1], av[2]);
// 	ft_printf("res = %s\n", res);
// 	free(res);
// }

