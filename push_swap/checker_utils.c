/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:39:14 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/02 20:22:54 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_swap(t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp_v2(line, "sa\n") == 0)
	{
		sa(a, true);
		return (1);
	}
	else if (ft_strcmp_v2(line, "sb\n") == 0)
	{
		sb(b, true);
		return (1);
	}
	else if (ft_strcmp_v2(line, "ss\n") == 0)
	{
		ss(a, b, true);
		return (1);
	}
	return (0);
}

static int	ft_push(t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp_v2(line, "pa\n") == 0)
	{
		pa(a, b, true);
		return (1);
	}
	else if (ft_strcmp_v2(line, "pb\n") == 0)
	{
		pb(a, b, true);
		return (1);
	}
	return (0);
}

static int	ft_rotate(t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp_v2(line, "ra\n") == 0)
	{
		ra(a, true);
		return (1);
	}
	else if (ft_strcmp_v2(line, "rb\n") == 0)
	{
		rb(a, true);
		return (1);
	}
	else if (ft_strcmp_v2(line, "rr\n") == 0)
	{
		rr(a, b, true);
		return (1);
	}
	return (0);
}

static int	ft_reverse_rotate(t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp_v2(line, "rra\n") == 0)
	{
		rra(a, true);
		return (1);
	}
	else if (ft_strcmp_v2(line, "rrb\n") == 0)
	{
		rrb(a, true);
		return (1);
	}
	else if (ft_strcmp_v2(line, "rrr\n") == 0)
	{
		rrr(a, b, true);
		return (1);
	}
	return (0);
}

int	match_op(t_stack **a, t_stack **b, char *line)
{
	if (ft_swap(a, b, line) == 1)
		return (1);
	if (ft_push(a, b, line) == 1)
		return (1);
	if (ft_rotate(a, b, line) == 1)
		return (1);
	if (ft_reverse_rotate(a, b, line) == 1)
		return (1);
	return (0);
}
