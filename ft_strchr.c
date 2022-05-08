#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;
    char cc;

    cc = (char)c;
    i = 0;
    while (s[i] != cc && s[i] != 0)
        i++;
    if (cc == s[i])
        return ((char *)&s[i]);
    return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char *a = "a0cdecvvv\0  2";
//     char *b, *c, *d;
//     b = ft_strchr(a, 0);
//     printf("%s\n", b);
//     c = strchr(a, 'a' + 256);
//     printf("%s\n", c);

//     d = ft_strchr(a, 'a' + 256);
//     printf("%s\n", d);
// }