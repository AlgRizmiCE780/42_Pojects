/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:45:42 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/29 17:06:29 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s)
	{ 
		if (*s == ch)
		{
			return ((char *)(s));
		}
		s++;
	}
	if (ch == '\0')
	{
		return ((char *)(s));
	}
	return (NULL);
}

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*strjoin;

	if (!s2)
		return (NULL);
	if (!s1)
		s1 = ft_strdup("");
	if (!s1)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	strjoin = malloc((s1len + s2len + 1) * sizeof(char));
	if (!strjoin)
		return (strjoin);
	ft_strlcpy(strjoin, s1, s1len + 1);
	ft_strlcat(strjoin, s2, s1len + s2len + 1);
	free((void *)s1);
	return (strjoin);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	char	*original;
	size_t	size;

	size = ft_strlen(s1);
	dup = malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	original = dup;
	while (*s1)
		*dup++ = *s1++;
	*dup = '\0';
	return (original);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	if (!dest || !src)
		return (0);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destlen >= size)
	{
		return (size + srclen);
	}
	i = 0;
	while (src[i] != '\0' && (destlen + i) < (size - 1))
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (destlen + srclen);
}

char	*ft_fetch_line_from_mem(char *memory)
{
	char	*line;
	size_t	i;

	i = 0;
	if (!memory[i])
		return (NULL);
	while (memory[i] != '\n' && memory[i])
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (memory[i] != '\n' && memory[i])
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
	char	*mem;
	size_t	i;

	i = 0;
	if (!memory[i])
	{
		free(memory);
		return (NULL);
	}
	mem = (char *)malloc(((ft_strlen(memory) - len_line) + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	while (memory[i + len_line] != '\0')
	{
		mem[i] = memory[i + len_line];
		i++;
	}
	mem[i] = '\0';
	free(memory);
	return (mem);
}
