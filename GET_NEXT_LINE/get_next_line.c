/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:45:53 by mlefort           #+#    #+#             */
/*   Updated: 2023/12/06 21:41:32 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_and_stash_v1(int fd, char *stash)
{
	char	*buf;
	int		nb_read;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	nb_read = 1;
	while (ft_strchr(stash, '\n') == NULL && nb_read != 0)
	{
		nb_read = read(fd, buf, BUFFER_SIZE);
		if (nb_read == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[nb_read] = '\0';
		if (!stash)
		{
			stash = malloc(sizeof(char) * (nb_read + 1));
			stash = ft_strcpy(stash, buf);
		}
		else
			stash = ft_strjoin(stash, buf);
	}
	free(buf);
	return (stash);
}

char	*ft_put_stash_in_line(char *stash, char *line)
{
	int	i;

	i = 0;
	if (!stash)
		return (NULL);
	while (stash[i])
	{
		if (stash[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_clean_stash(char *stash)
{
	int		i;
	char	*temp;
	int		j;

	i = 0;
	while (stash[i] != '\n' && stash[i])
		i++;
	if (stash[i] == '\0')
	{
		free(stash);
		return (NULL);
	}
	i++;
	temp = malloc(sizeof(char) * (ft_strlen(stash) - i + 1));
	if (!temp)
		return (NULL);
	j = 0;
	while (stash[i])
	{
		temp[j] = stash[i];
		i++;
		j++;
	}
	temp[i] = '\0';
	free(stash);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;


	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	stash = read_and_stash_v1(fd, stash);
	if (!stash)
	{
		free(stash);
		return (NULL);
	}
	line = ft_put_stash_in_line(stash, line);
	if (!line)
	{
		free(line);
		return (NULL);
	}
	stash = ft_clean_stash(stash);
	if (line[0] == '\0')
	{
		free(line);
		free(stash);
		return (NULL);
	}
	return (line);
}

/*int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);

	printf("line  :%s", get_next_line(fd));
	printf("line  :%s", get_next_line(fd));
	printf("line  :%s", get_next_line(fd));
	printf("line  :%s", get_next_line(fd));
	printf("line  :%s", get_next_line(fd));
	return (0);
}*/
