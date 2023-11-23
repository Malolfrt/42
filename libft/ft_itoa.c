/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:31:22 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/23 20:34:21 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_min(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		str = (char *)malloc(sizeof(char) * 12);
		if (!str)
			return (0);
		str = "-2147483648";
		str[11] = '\0';
		return (str);
	}
	return (NULL);
}

char	*print_res(int n)
{
	char	*str;
	char    *temp;

	if (n > 9)
	{
		temp = print_res((n / 10));
        str = ft_strjoin(temp, print_res(n % 10));
		print_res((n % 10));
	}
    else if(n >= 0 && n <= 9)
	{
		str[i] = (n + '0');
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (check_min(n) != NULL)
	{
		return (check_min(n));
	}
	if (n < 0)
	{
		str = ft_strjoin("-", print_res(-n));
	}
    else
    {
	str = print_res(n);
    }
	return (str);
}

/*int	main(void)
{
	int		i;
	char	*res;

	i = 123;
	res = ft_itoa(i);
	printf ("%s\n", res);
	return (0);
}*/
