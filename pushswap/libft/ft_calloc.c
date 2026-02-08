/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:14:10 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/09 19:22:21 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	totalsize;

	totalsize = size * count;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (totalsize > 2147483647 || size > 2147483647 || count > 2147483647)
		return (NULL);
	ptr = malloc(totalsize);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, totalsize);
	return (ptr);
}
