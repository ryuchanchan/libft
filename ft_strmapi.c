#include "libft.h"

char *ft_strmapi(char const *s, char (f)(unsigned int, char))
{
    char *ss;
    unsigned int i;

    if (s == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        ss[i] = f(i, s[i]);
        i++;
    }
    ss[i] = '\0';
    return (ss);
}