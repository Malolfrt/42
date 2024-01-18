/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:06:35 by malo              #+#    #+#             */
/*   Updated: 2024/01/06 18:43:16 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_itoa(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = nbr * -1;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	if (count == 0)
		count++;
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*new;
	int		len;
	int		i;

	len = count_itoa(nbr);
	new = malloc(sizeof(char) * (len +1));
	if (!new)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		new[i] = '-';
		i++;
		nbr = nbr * -1;
	}
	new[len] = '\0';
	while (len > i)
	{
		len--;
		new[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (new);
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	char	*res;

	nb = -42;
	res = ft_itoa(nb);
	printf("%s\n", res);
	return (0);
}