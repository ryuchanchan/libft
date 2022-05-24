#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    char *ss;

    ss = (char *)s;
    i = ft_strlen(s) + 1;
    while (i--)
    {
        if (ss[i] == (char)c)
            return ((char *)&ss[i]);
    }
    return (NULL);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
    char *a = "a0cdecvvv\0  2";
    char *b, *c;
    b = strrchr(a, 'c');
    printf("%s\n", b);
    c = ft_strrchr(a, 'c');
    printf("%s\n", c);

    char *aa = "";
    char *bb, *cc;

    bb = strrchr(aa, 'c');
    printf("%s\n", bb);
    cc = ft_strrchr(aa, 'c');
    printf("%s\n", cc);
}*/