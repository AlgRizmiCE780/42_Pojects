/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahman <rahman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:34:41 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/12 19:55:54 by rahman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_print_ptr(const void *addr)
{
    int			count;
    uintptr_t	addrs;

    count = 0;
    addrs = (uintptr_t)addr;
    count += write(1, "0x", 2);  // This returns 2
    count += ft_puthex(addrs, 0);
    return (count);
}
