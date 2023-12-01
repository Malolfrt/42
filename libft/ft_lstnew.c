/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:43:31 by malo              #+#    #+#             */
/*   Updated: 2023/11/30 12:33:56 by mlefort          ###   ########.fr       */
=======
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:43:31 by malo              #+#    #+#             */
/*   Updated: 2023/11/25 23:33:46 by malo             ###   ########.fr       */
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
<<<<<<< HEAD
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (new = NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
=======
	
}
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a
