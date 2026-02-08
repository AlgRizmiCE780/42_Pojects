/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:01:31 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/09 19:05:08 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	if (nlen > len)
		return (NULL);
	i = 0;
	while (i <= len - nlen && haystack[i] != '\0')
	{
		j = 0;
		while (j < nlen && haystack[i + j] == needle[j])
			j++;
		if (j == nlen)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
