/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:01:08 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/16 15:11:14 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexptr(uintptr_t n)
{
	int		count;
	char	digit;

	count = 1;
	digit = 0;
	if (n >= 16)
		count += ft_puthexptr(n / 16);
	digit = (n % 16);
	if (digit >= 10 && digit <= 16)
		digit = (digit - 10) + '0' + 49;
	else if (digit < 10)
		digit = digit + '0';
	ft_putchar_fd(digit, 1);
	return (count);
}
