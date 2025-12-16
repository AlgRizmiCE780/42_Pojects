/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:34:41 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/16 15:07:13 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(const void *addr)
{
	int			count;
	uintptr_t	addrs;

	count = 0;
	addrs = (uintptr_t)addr;
	count += write(1, "0x", 2);
	count += ft_puthexptr(addrs);
	return (count);
}
