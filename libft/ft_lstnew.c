/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:43:31 by malo              #+#    #+#             */
/*   Updated: 2023/11/28 14:32:46 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (new = NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int	main(void)
{
	char	*test = "test de la sturcture";
	t_list	*nw;

	nw = ft_lstnew(test);
	printf("%s\n", (char *)nw->content);
	printf("%s\n", (char *)nw->next);
	return (0);
}*/