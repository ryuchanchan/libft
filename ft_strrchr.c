#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    char *ss;
    char target;

    ss = (char *)s;
    target = c;
    i = ft_strlen(s);
    if (target == '\0')
        return (&ss[i]);
    while (i > 0)
    {
        if (ss[i] == target)
            return (&ss[i]);
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
