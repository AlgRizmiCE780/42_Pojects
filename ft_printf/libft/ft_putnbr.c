#include "../ft_printf.h"

int ft_putnbr_fd(int n, int fd)
{
    char digit;
    int count;

    count = 0;
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        if (n == -2147483648)
        {
            ft_putstr_fd("2147483648", fd);
            return (11);
        }
        n = -n;
    }
    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);
    digit = (n % 10) + '0';
    count += ft_putchar_fd(digit, fd);
    return (count);
}
