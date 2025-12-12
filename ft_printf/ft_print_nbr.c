#include "ft_printf.h"

int ft_print_nbr(int num)
{
    char *nbr;
    int count = 0;
    
    nbr = ft_itoa(num);
    if (!nbr)
        return (0);
    count += ft_print_str(nbr);
    free(nbr);
    return (count);
}
