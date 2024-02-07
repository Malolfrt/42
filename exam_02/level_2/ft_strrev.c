/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:49:35 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 18:45:43 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	char	temp;
	char	temp2;

	start = 0;
	end = 0;
	while (str[end])
		end++;
	end -= 1;
	while (end > start)
	{
		temp = str[start];
		temp2 = str[end];
		str[start] = temp2;
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}
// char	*ft_strrev(char *str)
// {
// 	int	len;
// 	int	i;
// 	char	tmp;

// 	len = 0;
// 	i = 0;
// 	while (str[len])
// 		len++;
// 	len -= 1;
// 	while (i < len)
// 	{
// 		tmp = str[i];
// 		str[i] = str[len];
// 		str[len] = tmp;
// 		i++;
// 		len--;
// 	}
// 	// str[i] = '\0';
// 	return (str);
// }

// char *ft_strrev(char *str)
// {
// 	int i = -1;
// 	int length = 0;
// 	char temporary;

// 	while (str[length])
// 		length++;
// 	while (++i < length / 2)
// 	{
// 		temporary = str[i];
// 		str[i] = str[length - 1 - i];
// 		str[length - 1 - i] = temporary;
// 	}
// 	return (str);
// }

#include <stdio.h>

int	main(void)
{
	char	*str = "123";
	char	*res;

	res = ft_strrev(str);
	printf("%s\n", res);
	return (0);
}