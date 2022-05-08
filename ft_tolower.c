#include "libft.h"

int ft_tolower(int c)
{
    if ('A' <= c && c <= 'Z')
        return (c - (-32));
    return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int main ()
// {
//     int low, low2, l1, l2;

//     low = tolower('A');
//     l1 = tolower('b');
//     printf("%c\n", low);
//     printf("%c\n", l1);

//     low2 = ft_tolower('A');
//     l2 = ft_tolower('b');
//     printf("%c\n", low2);
//     printf("%c\n", l2);
// }