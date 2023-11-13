/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:58:52 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/13 21:22:39 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 0;
	result = 0;
	while (nptr[i])
	{
		while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
			i++;
		if (nptr[i] == '-' || nptr[i] == '+')
			{
				if (nptr[i] == '-')
					neg++;
				i++;	
			}
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			result = nptr[i] - 48;
			result = result * 10;
			i++;
		}
		i++;
	}
	if(neg % 2 == 1)
		return (-result);
	else
		return (result);	
}

int	main(void)
{
	const char	*str = "   1243qw25";
	int			res;

	res = ft_atoi(str);
	printf ("%d\n", res);
	return (0);
}