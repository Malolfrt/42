/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:31:22 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/24 23:10:24 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (i == 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nbr;
	int			i;

	nbr = n;
	len = count(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		str[0] = '-';
		i++;
	}
	while (len > i)
	{
		len--;
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}

/*int	main(void)
{
	int		i;
	char	*res;

	i = 2147483647;
	res = ft_itoa(i);
	printf ("%s\n", res);
	return (0);
}*/
