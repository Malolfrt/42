/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:32:31 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/15 13:31:21 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	tab[17] = "ceci est un test";
	char	tabtrue[17] = "ceci est un trues";

	printf ("%s : beforetest\n", tab);
	printf ("%s : beforetrue\n", tabtrue);

	bzero((tabtrue + 8), 5);
	ft_bzero((tab + 8), 5);
	printf ("%s : aftertrue\n", tabtrue);
	printf ("%s : aftertest\n", tab);
	return (0);
}*/
