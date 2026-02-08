/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:53:26 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/09 14:58:17 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*current;

	if (!lst)
		return (0);
	i = 0;
	current = lst;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
