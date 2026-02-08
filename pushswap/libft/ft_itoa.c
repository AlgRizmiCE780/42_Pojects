/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:43:03 by fmohamed          #+#    #+#             */
/*   Updated: 2025/11/07 22:45:02 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	alloc_size(long n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*intochar(char *str, long num, int isnegative, size_t limit)
{
	size_t	i;

	str[limit - 1] = '\0';
	i = limit - 2;
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	if (isnegative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	int		isnegative;
	size_t	size;
	char	*itoa;

	num = (long)n;
	isnegative = 0;
	if (num < 0)
	{
		num = -num;
		isnegative = 1;
	}
	size = alloc_size(num) + isnegative + 1;
	itoa = malloc(sizeof(char) * size);
	if (!itoa)
		return (NULL);
	return (intochar(itoa, num, isnegative, size));
}
