/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:49:12 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/19 15:10:31 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_specifier(const char *format)
{
	int	i;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if ((format[i] == 'c' || format[i] == 's' || format[i] == 'p'
					|| format[i] == 'd' || format[i] == 'i' || format[i] == 'u'
					|| format[i] == 'x' || format[i] == 'X'
					|| format[i] == '%'))
				return (1);
			else
				return (0);
		}
		if (format[i] != '\0')
			i++;
	}
	return (1);
}

static int	specifier_select(char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (type == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (type == 'p')
		count += ft_print_ptr(va_arg(args, const void *));
	else if (type == 'd' || type == 'i')
		count += ft_print_nbr(va_arg(args, int));
	else if (type == 'u')
		count += ft_print_unsignbr(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		count += ft_print_hex(va_arg(args, int), type);
	else if (type == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	if (check_specifier(format) == 0)
	{
		write(1, "more percent conversions than data arguments", 45);
		count = 45;
		return (count);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += specifier_select(format[++i], args);
		}
		else
			count += ft_print_char(format[i]);
		i++;
	}
	return (count);
}
