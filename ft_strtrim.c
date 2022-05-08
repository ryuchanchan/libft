#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *trim;
    size_t a;
    size_t b;

    if (!s1)
        return (NULL);
    if (*s1 == '\0' || !set)
        return (ft_strdup(s1));
    a = 0;
    b = ft_strlen(s1);
    while (ft_strchr(set, s1[a]) != NULL)
        a++;
    while (ft_strchr(set, s1[b]) != NULL && b > a)
        b--;
    if (a == b)
        return (ft_substr(s1, a, 1));
    trim = ft_substr(s1, a, b - a + 1);
    return (trim);
}

#include <stdio.h>
int main()
{
    char *t;
    char *s = (char *)malloc(10);
    char *set = (char *)malloc(10);
    set[0] = '0';
    set[1] = '1';

    int i = 0;
    while (i < 10)
    {
        s[i] = '0' + i;
        i++;
    }
    t = ft_strtrim(s, "0123");

    printf("%s\n", t);
    free(t);
    free(set);
    free(s);
}