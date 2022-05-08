#include "libft.h"

int ft_isalpha(int c)
{
    if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
    { 
        return (1);
    }
    return (0);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_isalpha('a'));
//     printf("%d\n", ft_isalpha('1'));
// }