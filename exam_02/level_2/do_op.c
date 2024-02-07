/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:19:19 by malo              #+#    #+#             */
/*   Updated: 2024/01/02 16:35:48 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	do_op(char *s1, char *op, char *s2)
{
	int	s1num;
	int	s2num;
	int	res;

	s1num = atoi(s1);
	s2num = atoi(s2);
	if (op[0] == '+')
	{
		res = s1num + s2num;
		printf("%d\n", res);
		return ;
	}
	if (op[0] == '-')
	{
		res = s1num - s2num;
		printf("%d\n", res);
		return ;
	}
	if (op[0] == '*')
	{
		res = s1num * s2num;
		printf("%d\n", res);
		return ;
	}
	if (op[0] == '/')
	{
		res = s1num / s2num;
		printf("%d\n", res);
		return ;
	}
	if (op[0] == '%')
	{
		res = s1num % s2num;
		printf("%d\n", res);
		return ;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	else 
		write(1, "\n", 1);
	return (0);
}