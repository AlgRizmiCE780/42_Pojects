
#include "ft_printf.h"

int ft_print_nbr(int num)
{
    int count = 0;
    count = ft_putnbr_fd(num, 1);
    return count;
}