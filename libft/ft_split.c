/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 22:41:55 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/08 14:17:24 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **array, size_t index)
{
	while (index > 0)
	{
		index--;
		free(array[index]);
	}
	free(array);
	return (NULL);
}

static char	**wordalloc(char *start, char **result, char c, size_t total_size)
{
	size_t	i;
	char	*end;

	i = 0;
	while (*start && i < total_size - 1)
	{
		while (*start == c)
			start++;
		if (!*start)
			break ;
		end = start;
		while (*end && *end != c)
			end++;
		result[i] = malloc((end - start) + 1);
		if (!result[i])
			return (free_array(result, i));
		ft_memcpy(result[i], start, (end - start));
		result[i][(end - start)] = '\0';
		i++;
		start = end;
	}
	result[i] = NULL;
	return (result);
}

size_t	word_count(char const *str, char deli)
{
	size_t	i;
	size_t	inword;
	size_t	count;

	count = 0;
	i = 0;
	inword = 0;
	while (str[i] != '\0')
	{
		if (str[i] != deli && !inword)
		{
			count++;
			inword = 1;
		}
		if (str[i] == deli)
		{
			inword = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	total_size;
	char	**result;

	if (!s)
		return (NULL);
	total_size = word_count(s, c) + 1;
	result = malloc(total_size * sizeof(char *));
	if (!result)
		return (NULL);
	return (wordalloc((char *)s, result, c, total_size));
}
