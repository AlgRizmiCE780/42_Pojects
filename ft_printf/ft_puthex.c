

#include "ft_printf.h"

int ft_puthex(uintptr_t n, int format)
{
	char digit;
	int count;

	count = 1;
	digit = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, format);
	digit = (n % 16);
	if (digit >= 10 && digit <= 16)
	{
		if (format == 1)
			digit = (digit - 10) + '0' + 17;
		else if (format == 0)
			digit = (digit - 10) + '0' + 49;
	}
	else if (digit < 10)
		digit = digit + '0';
	ft_putchar_fd(digit, 1);
	return (count);
}
