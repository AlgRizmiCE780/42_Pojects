/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:05:42 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/30 16:22:04 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(long long result, int digit, int sign)
{
	if (sign == 1)
	{
		if (result > (LLONG_MAX - digit) / 10)
			return (-1);
	}
	else
	{
		if (result > (LLONG_MAX - digit) / 10)
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	result;
	int			overflow;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		overflow = check_overflow(result, (*str - '0'), sign);
		if (overflow == -1)
			return (-1);
		else if (overflow == 0)
			return (0);
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

