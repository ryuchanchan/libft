#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *ss1;
    const unsigned char *ss2;
    size_t i;

    ss1 = (const unsigned char *)s1;
    ss2 = (const unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (ss1[i] != ss2[i])
            return (ss1[i] - ss2[i]);
        i++;
    }
    if (n == 0)
        return (0);
    return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char a[] = "ABDEFG";
//     char b[] = "ACCDEFG";

//     printf("%d\n", ft_memcmp(a, b, 7));
//     printf("%d\n", memcmp(a, b, 7));

//     printf("-----------\n");

//     printf("%d\n", ft_memcmp(a, b, 0));
//     printf("%d\n", memcmp(a, b, 0));
//     printf("-----------\n");

//     char aa[] = "ABCDEFG";
//     char bb[] = "ABCDEFG";
//     printf("%d\n", ft_memcmp(aa, bb, 7));

//     printf("-----------\n");
//     char aaa[] = "A\0CDFFG";
//     char bbb[] = "A\0CDEFG";
//     printf("%d\n", ft_memcmp(aaa, bbb, 7));
//     printf("%d\n", memcmp(aaa, bbb, 7));
// }