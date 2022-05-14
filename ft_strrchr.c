#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    char *ss;

    ss = (char *)s;
    i = ft_strlen(s);
    while (ss[i] >= 0)
    {
        if (ss[i] == (char)c)
            return ((char *)&ss[i]);
        i--;
    }
    return (NULL);
}


// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char *a = "a0cdecvvv\0  2";
//     char *b, *c;
//     b = strrchr(a, 'c' + 256);
//     printf("%s\n", b);
//     c = ft_strrchr(a, 'c' + 256);
//     printf("%s\n", c);

//     char *aa = "";
//     char *bb, *cc;

//     bb = strrchr(aa, 'c');
//     printf("%s\n", bb);
//     cc = ft_strrchr(aa, 'c');
//     printf("%s\n", cc);
// }
