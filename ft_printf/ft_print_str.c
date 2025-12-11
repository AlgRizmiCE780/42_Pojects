/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahman <rahman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:31:11 by fmohamed          #+#    #+#             */
/*   Updated: 2025/12/08 15:38:16 by rahman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;
	
	count = 0;
	if (!str)
		write(1, " ", 1);
	count = ft_putstr_fd(str, 1);
	return (count);
}
