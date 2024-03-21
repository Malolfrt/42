/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:41:22 by mlefort           #+#    #+#             */
/*   Updated: 2024/03/21 12:13:31 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*read_and_stash_v1(int fd, char *stash, int nb_read)
{
	char	*buf;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	while (!ft_strchr(stash, '\n') && nb_read != 0)
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

char	*ft_put_stash_in_line(char *stash)
{
	int		i;
	char	*line;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
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
	int		j;
	char	*temp;

	i = 0;
	while (stash[i] != '\n' && stash[i])
		i++;
	if (!stash[i])
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
		temp[j++] = stash[i++];
	temp[j] = '\0';
	free(stash);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*stash[1024];
	char		*line;
	int			nb_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	nb_read = 1;
	stash[fd] = read_and_stash_v1(fd, stash[fd], nb_read);
	if (!stash[fd])
		return (NULL);
	line = ft_put_stash_in_line(stash[fd]);
	stash[fd] = ft_clean_stash(stash[fd]);
	if (line[0] == '\0')
	{
		free(stash[fd]);
		stash[fd] = NULL;
		free(line);
		return (NULL);
	}
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("test.txt", O_RDONLY);
// 	line = get_next_line_bonus(fd);
// 	printf("%s\n", line);
// 	fd = open("test1.txt", O_RDONLY);
// 	printf("%s\n", line);
// 	return (0);
// }
