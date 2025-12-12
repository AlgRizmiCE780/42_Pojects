/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahman <rahman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:49:12 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/12 19:35:12 by rahman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int specifier_select(char type, va_list args)
{
    int count = 0;
    if (type == 'c')
        count += ft_print_char(va_arg(args, int));
    else if (type == 's')
        count += ft_print_str(va_arg(args, char *));
    else if (type == 'p')
        count += ft_print_ptr(va_arg(args, const void *));
    else if (type == 'd' || type == 'i')
        count += ft_print_nbr(va_arg(args, int));
    else if (type == 'u')
        count += ft_print_unsigned(va_arg(args, unsigned int));
    else if (type == 'x' || type == 'X')
        count += ft_print_hex(va_arg(args, int), type);
    else if (type == '%')
        count += ft_print_char('%');
    else
    {
        write(1, "\n\nERROR: No valid type specified!\n", 34);
        exit(1);
    }
    return count;
}
int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int i;
    i = 0;
    int count = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            count += specifier_select(format[++i], args);
        }
        else
        {
            count += ft_print_char(format[i]);
        }
        i++;
    }

    return count;
}
