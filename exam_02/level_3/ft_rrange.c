/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:30:05 by malo              #+#    #+#             */
/*   Updated: 2024/01/05 14:46:01 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int *) * 100);
	if (!tab)
		return (0);
	if (end >= start)
	{
		while (end >= start)
		{
			tab[i] = end;
			end--;
			i++;
		}

	}
	else if (end < start)
	{
		while (end <= start)
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	int	*tab;

	tab = ft_rrange(1, 3);
	printf("%d, ", tab[0]);
	printf("%d, ", tab[1]);
	printf("%d, ", tab[2]);
	printf("%d, ", tab[3]);
	printf("%d, ", tab[4]);
	printf("%d, ", tab[5]);
	printf("%d, ", tab[6]);
	printf("%d, ", tab[7]);
	printf("%d, ", tab[8]);
	printf("\n");
	return (0);
}