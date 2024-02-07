/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:34:30 by malo              #+#    #+#             */
/*   Updated: 2024/01/09 16:29:22 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				tmp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tabtest[6] = {77, 1, 18, 4, 5, 8};
	int	i; 
	int	j;

	i = 0;
	while (i < 6)
	{
		printf("%d\n", tabtest[i]);
		i++;
	}
	printf("NEW TAB\n");
	j = 0;
	sort_int_tab(tabtest, 6);
	while (j < 6)
	{
		printf("%d\n", tabtest[j]);
		j++;
	}
	return (0);
}