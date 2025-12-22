/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:41:53 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/22 19:17:45 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_free(char *s1, char *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*strjoin;

	if (!s1 || !s2)
		return (free(s1), NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	strjoin = malloc((s1len + s2len + 1) * sizeof(char));
	if (!strjoin)
		return (free(s1), NULL);
	ft_strlcpy(strjoin, s1, s1len + 1);
	ft_strlcat(strjoin, s2, s1len + s2len + 1);
	return (free(s1), strjoin);
}

char	*ft_fetch_line_from_mem(char *memory)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!memory[i])
		return (NULL);
	while (memory[i] && memory[i] != '\n')
		i++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (memory[i] && memory[i] != '\n')
	{
		line[i] = memory[i];
		i++;
	}
	if (memory[i] == '\n')
	{
		line[i] = memory[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_set_nextline(char *memory, size_t len_line)
{
	size_t	i;
	char	*mem;

	i = 0;
	if (!memory[i])
		return (free(memory), NULL);
	mem = malloc((ft_strlen(memory) - len_line + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	while (memory[i + len_line])
	{
		mem[i] = memory[i + len_line];
		i++;
	}
	mem[i] = '\0';
	return (free(memory), mem);
}

char	*ft_set_line_to_mem(int fd, char *memory)
{
	ssize_t	bytes_data;
	char	*buffer;

	bytes_data = 1;
	if (!memory)
		memory = ft_strdup("");
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free(memory), NULL);
	while (!ft_strchr(memory, '\n') && bytes_data != 0)
	{
		bytes_data = read(fd, buffer, BUFFER_SIZE);
		if (bytes_data == -1)
			return (free(buffer), free(memory), NULL);
		buffer[bytes_data] = '\0';
		memory = ft_strjoin_free(memory, buffer);
	}
	free(buffer);
	if (bytes_data == 0 && memory[0] == '\0')
		return (free(memory), NULL);
	return (memory);
}

char	*get_next_line(int fd)
{
	static char	*mem;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	mem = ft_set_line_to_mem(fd, mem);
	if (!mem)
		return (NULL);
	line = ft_fetch_line_from_mem(mem);
	if (!line)
	{
		free(mem);
		mem = NULL;
		return (NULL);
	}
	mem = ft_set_nextline(mem, ft_strlen(line));
	return (line);
}
