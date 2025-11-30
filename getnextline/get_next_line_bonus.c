/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:44:13 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/29 17:06:24 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_set_line_to_mem(int fd, char *memory)
{
	ssize_t	bytes_data;
	char	*buffer;

	bytes_data = 1;
	if (!memory)
		memory = ft_strdup("");
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!ft_strchr(memory, '\n') && bytes_data != 0)
	{
		bytes_data = read(fd, buffer, BUFFER_SIZE);
		if (bytes_data == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes_data] = '\0';
		memory = ft_strjoin_free(memory, buffer);
	}
	free(buffer);
	return (memory);
}

char	*get_next_line(int fd)
{
	static char	*mem[4096];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		return (NULL);
	}
	mem[fd] = ft_set_line_to_mem(fd, mem[fd]);
	if (!mem[fd])
	{
		return (NULL);
	}
	line = ft_fetch_line_from_mem(mem[fd]);
	if (!line)
		return (NULL);
	mem[fd] = ft_set_nextline(mem[fd], ft_strlen(line));
	return (line);
}
