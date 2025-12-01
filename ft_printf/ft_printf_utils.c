/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:31:30 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/01 15:54:35 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	if (c == ' ')
		return (0);
	return (1);
}

int	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	int		count;

	count = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putstr_fd("2147483648", fd);
			return (11);
		}
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	digit = (n % 10) + '0';
	count += ft_putchar_fd(digit, fd);
	return (count);
}

int	ft_putstr_fd(char *s, int fd)
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

int	ft_puthex(uintptr_t n, int format)
{
	char	digit;
	int		count;

	count = 1;
	digit = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, format);
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
	ft_putchar_fd(digit, 1);
	return (count);
}
