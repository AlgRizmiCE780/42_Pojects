/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:03:56 by fmohamed          #+#    #+#             */
/*   Updated: 2026/02/06 17:13:38 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char type)
{
	if (type == 'x')
		return (pf_puthex(n, 0));
	else if (type == 'X')
		return (pf_puthex(n, 1));
	return (0);
}
