/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:34:37 by malo              #+#    #+#             */
/*   Updated: 2024/01/04 17:03:34 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int	i;
	int	flg;

	i = 0;
	flg = 0;
	while (str[i] <= 32)
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			flg = 1;
		if (str[i] >= 33)
		{
			if (flg == 1)
				write(1, " ", 1);
			flg = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}

// int main(int argc, char const *argv[])
// {
// 	int i;
// 	int flg;

// 	if (argc == 2)
// 	{
// 		i = 0;
// 		while (argv[1][i] == ' ' || argv[1][i] == '\t')
// 			i += 1;
// 		while (argv[1][i])
// 		{
// 			if (argv[1][i] == ' ' || argv[1][i] == '\t')
// 				flg = 1;
// 			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
// 			{
// 				if (flg)
// 					write(1, " ", 1);
// 				flg = 0;
// 				write(1, &argv[1][i], 1);
// 			}
// 			i += 1;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
