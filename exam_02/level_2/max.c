/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:35:26 by malo              #+#    #+#             */
/*   Updated: 2024/01/03 13:54:40 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int	tmp[len];

	i = 0;
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp[i] = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp[i];
			i = 0;
		}
		else
			i++;
	}
	return (tab[i]);
}

#include <stdio.h>

int main(void)
{
	int	tab[5] = {100, 10, 45, 322, 97};
	int	len;
	int	res;

	len = 5;
	res = max(tab, len);
	printf("%d\n", res);
	return (0);
}