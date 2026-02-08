/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:20:51 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/07 22:32:39 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*p = (const unsigned char *)s;
	size_t				i;

	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == ch)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
