/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:40:50 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/08 20:49:20 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ft_lstnew;

	ft_lstnew = malloc(sizeof(ft_lstnew));
	if (!ft_lstnew)
		return (NULL);
	ft_lstnew->content = content;
	return (ft_lstnew);
}
