#include "libft.h"

int ft_isprint(int  c)
{
    if (' ' <= c && c <= '~')
    {
        return (1);
    }
    return (0);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_isprint('~'));
//     printf("%d\n", ft_isprint(' '));
//     printf("%d\n", ft_isprint(32));
//     printf("%d\n", ft_isprint(126));
//     printf("%d\n", ft_isprint(31));
//     printf("%d\n", ft_isprint(127));
// }