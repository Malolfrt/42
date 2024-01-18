/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:12:14 by malo              #+#    #+#             */
/*   Updated: 2024/01/09 14:33:28 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list	t_list;

struct s_list
{
	t_list		*next;
	int			data;
};

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != 0)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}