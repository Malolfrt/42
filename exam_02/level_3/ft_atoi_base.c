/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:10:24 by malo              #+#    #+#             */
/*   Updated: 2024/01/13 17:37:49 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(char c, int base)
{
	char	*basemin;
	char	*basemaj;

	basemin = "0123456789abcdef";
	basemaj = "0123456789ABCDEF";

	while (base > 0)
	{
		if (c == basemin[base] || c == basemaj[base])
			return (1);
		base--;
	}
	return (0);
}

int	ft_value_of(char c)
{
	if (c >= 0 && c <= 9)
		return (c - 48);
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		neg;
	int		res;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				neg = -1;
			i++;
		}
		while (is_valid(str[i], str_base) == 1)
		{
			res = res * str_base;
			res = res + ft_value_of(str[i]);
			i++;
		}
		i++;
	}
	return (res * neg);
}

#include <stdio.h>

int	main(void)
{
	char	*base = "123";
	int	res;

	res = ft_atoi_base(base, 16);
	printf("%d\n", res);
	return (0);
}