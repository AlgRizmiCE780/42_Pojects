/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:38:58 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/07 22:50:17 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	j;
	char	*strtrim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	strtrim = malloc(((end - start) + 1) * sizeof(char));
	if (!strtrim)
		return (NULL);
	j = 0;
	while (start < end)
		strtrim[j++] = s1[start++];
	strtrim[j] = '\0';
	return (strtrim);
}
