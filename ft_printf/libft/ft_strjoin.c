/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:20:11 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/07 22:44:01 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	strjoin = malloc((s1len + s2len + 1) * sizeof(char));
	if (!strjoin)
		return (NULL);
	ft_strlcpy(strjoin, s1, s1len + 1);
	ft_strlcat(strjoin, s2, s1len + s2len + 1);
	return (strjoin);
}
