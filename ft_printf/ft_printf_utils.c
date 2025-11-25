/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:31:30 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/25 14:53:46 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(char c)
{
	ft_putchar_fd(c, 1);
}

void	ft_print_str(char *str)
{
	if (!str)
		write(1, "", 1);
	ft_putstr_fd(str, 1);
}
