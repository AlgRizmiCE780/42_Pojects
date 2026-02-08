/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:08:41 by fmohamed          #+#    #+#             */
/*   Updated: 2026/02/07 12:30:00 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
#include <stdint.h>

char	*pf_itoa(int n);
int		pf_putchar_fd(char c, int fd);
int		pf_putstr_fd(char *s, int fd);
int		pf_put_unsignbr(unsigned int n, int fd);
int		pf_puthexptr(uintptr_t n);
int		pf_puthex(unsigned int n, int format);

int		ft_printf(const char *format, ...);
int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_nbr(int num);
int		ft_print_ptr(const void *addr);
int		ft_print_unsignbr(unsigned int num);
int		ft_print_hexptr(uintptr_t n);
int		ft_print_hex(unsigned int n, char type);

#endif
