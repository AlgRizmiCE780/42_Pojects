/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:49:39 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/07 22:33:36 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
