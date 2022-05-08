#include "libft.h"

int ft_isdigit(int c)
{
    if ('0' <= c && c <= '9')
    {
        return (1);
    }
    return (0);
}


// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_isdigit('2'));
//     printf("%d\n", ft_isdigit('a'));
// }