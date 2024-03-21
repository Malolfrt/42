/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:26:56 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/29 20:11:30 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int ac, char **av, char **env)
{
	char	**path;

	if (ac != 5)
		return (0);
	path = get_path(env);
	if (path == NULL)
	{
		ft_error("L'environnement n'existe pas");
	}
	ft_free_tab(path);
	check_access(av[1], av[ac - 1]);
	parsing(av[2], env);
	return (0);
	parsing(av[3], env);
	open_fileoutput(av[ac - 1]);
	ft_printf("GG");

	return (0);
}
