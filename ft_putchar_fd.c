#include "libft.h"
#include "a"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

// int main()
// {
//     ft_putchar_fd("a", a);
// }