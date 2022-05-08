#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    write(1, "-2147483648", 11);
    else if (n < 0)
    {
        n *= -1;
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(n, fd);
    }
    else if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
        ft_putchar_fd('0' + n, fd);
}