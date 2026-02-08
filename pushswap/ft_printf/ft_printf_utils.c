/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:14:32 by fmohamed          #+#    #+#             */
/*   Updated: 2026/02/06 17:33:13 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	pf_puthex(unsigned int n, int format)
{
	char	digit;
	int		count;

	count = 1;
	digit = 0;
	if (n >= 16)
		count += pf_puthex(n / 16, format);
	digit = (n % 16);
	if (digit >= 10 && digit <= 16)
	{
		if (format == 1)
			digit = (digit - 10) + '0' + 17;
		else if (format == 0)
			digit = (digit - 10) + '0' + 49;
	}
	else if (digit < 10)
		digit = digit + '0';
	pf_putchar_fd(digit, 1);
	return (count);
}

int	pf_puthexptr(uintptr_t n)
{
	int		count;
	char	digit;

	count = 1;
	digit = 0;
	if (n >= 16)
		count += pf_puthexptr(n / 16);
	digit = (n % 16);
	if (digit >= 10 && digit <= 16)
		digit = (digit - 10) + '0' + 49;
	else if (digit < 10)
		digit = digit + '0';
	pf_putchar_fd(digit, 1);
	return (count);
}

int	pf_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		write(fd, s, 1);
		count++;
		s++;
	}
	return (count);
}

int	pf_put_unsignbr(unsigned int n, int fd)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += pf_put_unsignbr(n / 10, fd);
	count += pf_putchar_fd((n % 10) + '0', fd);
	return (count);
}
