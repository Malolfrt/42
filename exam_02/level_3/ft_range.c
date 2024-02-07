/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:16:30 by malo              #+#    #+#             */
/*   Updated: 2024/01/05 14:46:19 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int	i;
	int	count;


	i = start;
	count = 0;
	if (start < end)
	{
		while (i <= end)
		{
			i++;
			count++;
		}
	}
	else if (start > end)
	{
		while (i > end)
		{
			i--;
			count++;
		}
	}
	tab = malloc(sizeof(int *) * count);
	if (!tab)
		return (0);
	i = 0;	
	while (start != end)
	{
		tab[i] = start;
		if (start > end)
			start = start - 1;
		else if (start < end)
			start++;
		i++;
	}
	tab[i] = start;
	return (tab);
}


// int		*ft_range(int start, int end)
// {
// 	int		*range;
// 	int		i;

// 	if (start > end)
// 		range = (int *)malloc(sizeof(int) * (start - end) + 1);
// 	else
// 		range = (int *)malloc(sizeof(int) * (end - start) + 1);
// 	i = 0;
// 	while (start != end)
// 	{
// 		range[i++] = start;
// 		start += (start > end) ? -1 : 1;
// 	}
// 	range[i] = start;
// 	return (range);
// }

#include <stdio.h>

int	main(void)
{
	int	*tab;

	tab = ft_range(1, 3);
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
