/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahman <rahman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:31:11 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/12 19:42:30 by rahman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_str(char *str)
{
	int count;

	count = 0;
	if (!str)
		return (ft_print_str("(null)"));
	count += ft_putstr_fd(str, 1);
	return (count);
}
