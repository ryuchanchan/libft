#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ss;
    unsigned char cc;

    ss = (unsigned char *)s;
    cc = (unsigned char)c;
    if (n == 0)
        return (NULL);//いらない
    i = 0;
    while (i < n)
    {
        if (ss[i] == cc)
            return (ss + i);
        i++;
    }
    return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//         char str[] = " abcde\0fghij";
//         char *p, *p1, *pp2, *pp;
        
//         p = ft_memchr(str, 'h', sizeof(str));
//         printf("%s\n",p);
//         p1 = memchr(str, 'h', sizeof(str));
//         printf("%s\n",p);

//         pp = ft_memchr(str, 'h', sizeof(str));
//         printf("No%ld\n",pp - str);

//         pp2 = memchr(str, 'h', 12);
//         printf("No%ld\n",pp2 - str);
// }