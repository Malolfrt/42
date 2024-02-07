/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:38:08 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 16:51:12 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				neg = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10;
			result = result + (str[i] - 48);
			i++;
		}
		if (neg == -1)
			result *= -1;
		return (result);
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	*str = "123dzd458afaxa";
	int		res;

	res = ft_atoi(str);
	printf("%d\n", res);
	return (0);

}