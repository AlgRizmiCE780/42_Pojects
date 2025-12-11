
#include "ft_printf.h"

int ft_print_hex(uintptr_t n, char type)
{
    int count = 0;
    if (type == 'x')
        count += ft_puthex(n, 0);
    else if (type == 'X')
        count += ft_puthex(n, 1);

    return count;
}