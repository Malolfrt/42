/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:45:53 by mlefort           #+#    #+#             */
/*   Updated: 2023/12/01 19:05:23 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_recup_buf(int fd, char *buf)
{
	char	*str;
	size_t	i;

	buf = NULL;
	i = 0;
	str = malloc(sizeof(char) * BUFFER_SIZE);
	buf = malloc(sizeof(char) * BUFFER_SIZE);
	if (!str || !buf)
		return (NULL);
	read(fd, buf, BUFFER_SIZE);
	while (buf[i])
	{
		str[i] = buf[i];	
		i++;
	}
	return (str);
}

char	*found_line_and_stach(int fd, char *buf)
{
	char	*final;
	char	*temp1;
	char	*temp2;

	final = malloc(sizeof(char) * 1000);
	temp2 = malloc(sizeof(char) * 1000);
	temp1 = ft_recup_buf(fd, buf);
	while (*temp1)
	{
		temp2 = ft_strjoin(temp2, temp1);
		if (ft_strchr(temp2, '\n') != NULL)
			break ;
		temp1 = ft_recup_buf(fd, buf);
	}
	ft_strcpy(final, temp2);
	return (final);
}

char	*get_next_line(int fd)
{
	char		*buf;
	static char	*line;
	size_t		test;

	buf = NULL;
	line = NULL;
	test = read(fd, buf, BUFFER_SIZE);
	if (test < 0)
		return (NULL);
	line = malloc(sizeof(char) * 1000);
	line = found_line_and_stach(fd, buf);
	//lire le fichier


	//recuperer ce qui a ete lu dans le buf et le copier dans une variable
	//allouer la memoire de line
	//verifier si il y a un retour a la ligne
	//retourner line avec le retour a la ligne
	//free line
	return (line);
}

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);

	printf("line :%s\n", get_next_line(fd));
	printf("line :%s\n", get_next_line(fd));
	printf("line :%s\n", get_next_line(fd));
	printf("line :%s\n", get_next_line(fd));
	printf("line :%s\n", get_next_line(fd));
	return (0);
}