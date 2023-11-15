/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:00:52 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/15 13:31:08 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	s = str;
	return (s);
}

/*int	main(void)
{
	void	*test;
	void	*true;
	char	*restest;
	char	*restrue;
	void	*tab[15];

	test = ft_memset(tab, 't', 3);
	true = memset(tab, 't', 3);
	restest = test;
	restrue = true;
	printf("%s : %s", restest, restrue);
}*/