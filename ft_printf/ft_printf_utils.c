/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:31:30 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/30 16:35:34 by fmohamed         ###   ########.fr       */
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

	count = 0;
	digit = 0;
	if (n >= 16)
		ft_puthex(n / 16, format);
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
	count += ft_putchar_fd(digit, 1);
	return (count);
}

int	ft_print_char(char c)
{
	int	count;

	count = 0;
	count = ft_putchar_fd(c, 1);
	return (count);
}

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
		write(1, "", 1);
	count = ft_putstr_fd(str, 1);
	return (count);
}

int	ft_print_ptr(const void *addr)
{
	int			count;
	uintptr_t	address;

	count = 2;
	address = (uintptr_t)addr;
	write(1, "0x", 2);
	count += ft_puthex(address, 0);
	return (count);
}
