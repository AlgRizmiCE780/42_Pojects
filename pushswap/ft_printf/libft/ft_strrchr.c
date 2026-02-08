/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:23:53 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/08 11:31:11 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	ch;

	len = ft_strlen(s);
	ch = (char)c;
	if (ch == '\0')
	{
		return ((char *)s + len);
	}
	while (len--)
	{
		if (s[len] == ch)
		{
			return ((char *)s + len);
		}
	}
	return (NULL);
}
