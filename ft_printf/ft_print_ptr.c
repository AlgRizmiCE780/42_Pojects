/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:20:20 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/25 11:17:56 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	ft_print_ptr(void *ptr)
{
	printf("%p\n", ptr);
	write(1,ptr,1);
	
}

int	main(void)
{
	char *ptr;
	printf("%p", ptr);
	ft_print_ptr(ptr);
}