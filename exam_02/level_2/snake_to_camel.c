/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:07:14 by malo              #+#    #+#             */
/*   Updated: 2024/01/03 14:25:07 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*snake_to_camel(char *str)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * 1000);
	while (str[i])
	{
		if (str[i] == '_')
		{
			res[j] = str[i + 1] - 32;
			j++;
			i += 2;
		}
		else
		{
			res[j] = str[i];
			i++;
			j++;
		}
	}
	return (res);
}

#include <stdio.h>

int main(void)
{
	char *str = "here_is_a_snake_to_camel_stack";
	char *res;

	res = snake_to_camel(str);
	printf("%s\n", res);
	return (0);
}