/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:42:26 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/13 18:14:03 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)s);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	char str[] = "http://www.tutorialspoint.com";
	char ch = 'w';
	char *ret;

	ret = ft_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}*/

/*int	main(void)
{
	char	*s = "test de la fonction";
	char	res;

	res = ft_strchr(s, 'l');
	printf ("str after %c is - %c\n", s, res);
	return (0);
}*/
