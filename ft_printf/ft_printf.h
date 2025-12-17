/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:08:41 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/17 12:08:30 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa(int n);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_put_unsignbr_fd(unsigned int n, int fd);
int		ft_puthexptr(uintptr_t n);
int		ft_puthex(unsigned int n, int format);

int		ft_printf(const char *format, ...);
int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_nbr(int num);
int		ft_print_ptr(const void *addr);
int		ft_print_unsignbr(unsigned int num);
int		ft_print_hexptr(uintptr_t n);
int		ft_print_hex(unsigned int n, char type);

#endif
