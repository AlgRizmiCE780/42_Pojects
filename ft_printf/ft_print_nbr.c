/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:00:32 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/16 15:06:29 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int num)
{
	char	*nbr;
	int		count;

	count = 0;
	nbr = ft_itoa(num);
	if (!nbr)
		return (0);
	count += ft_print_str(nbr);
	free(nbr);
	return (count);
}
