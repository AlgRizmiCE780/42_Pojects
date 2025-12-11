/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahman <rahman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:08:41 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/11 13:17:56 by rahman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

size_t ft_strlen(const char *str);
int ft_putchar_fd(char c, int fd);
int ft_putnbr_fd(int n, int fd);
int ft_putstr_fd(char *s, int fd);
int ft_puthex(uintptr_t n, int format);

int ft_printf(const char *format, ...);
int ft_print_char(char c);
int ft_print_str(char *str);
int ft_print_nbr(int num);
int ft_print_ptr(const void *addr);
int ft_print_unsigned(unsigned int num);
int ft_print_hex(uintptr_t n, char type);

#endif
