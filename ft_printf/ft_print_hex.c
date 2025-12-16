/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:03:56 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/16 15:00:12 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char type)
{
	if (type == 'x')
		return (ft_puthex(n, 0));
	else if (type == 'X')
		return (ft_puthex(n, 1));
	return (0);
}
