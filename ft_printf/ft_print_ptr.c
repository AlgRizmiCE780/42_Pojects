/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:34:41 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/01 14:35:04 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(const void *addr)
{
	int			count;
	uintptr_t	address;
	if(addr == NULL)
		
		return 
	count = 2;
	address = (uintptr_t)addr;
	
	write(1, "0x", 2);
	count += ft_puthex(address, 0);
	return (count);
}
