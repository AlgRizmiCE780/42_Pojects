/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:41:53 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/25 12:01:36 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	static char	*mem;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		return (NULL);
	}
	mem = ft_set_line_to_mem(fd, mem);
	if (!mem)
	{
		return (NULL);
	}
	line = ft_fetch_line_from_mem(mem);
	if (!line)
		return (NULL);
	mem = ft_set_nextline(mem, ft_strlen(line));
	return (line);
}
