
#include "../ft_printf.h"

int ft_putstr_fd(char *s, int fd)
{
    int count;

    count = 0;
    while (*s != '\0')
    {
        write(fd, s, 1);
        count++;
        s++;
    }
    return (count);
}
