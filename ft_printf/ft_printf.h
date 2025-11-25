/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:08:41 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/25 11:56:23 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINT_F_H
# define LIBFT_PRINT_F_H

# include "libft/libft.h"
# include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h> 

int		ft_printf(const char *var);
void	ft_print_char(char c);
void    ft_print_str(char *str);
#endif
