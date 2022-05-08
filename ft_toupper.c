#include "libft.h"

int ft_toupper(int c)
{
    if ('a' <= c && c <= 'z')
    {
        return (c - 32);
    }
    return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//     printf( "%c\n", toupper('a') );
//     printf( "%c\n", toupper('A') );
//     printf( "%c\n", toupper('!') );
//     printf( "%c\n", toupper(' ') );

//     printf("-----\n");

//     printf( "%c\n", ft_toupper('a') );
//     printf( "%c\n", ft_toupper('A') );
//     printf( "%c\n", ft_toupper('!') );
//     printf( "%c\n", ft_toupper(' ') );
// }