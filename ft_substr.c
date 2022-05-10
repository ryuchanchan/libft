#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *data;

    if (!s)
        return (NULL);
    data = (char *)malloc(sizeof(*s) * (len + 1));
    if (!data)
        return (NULL);
    if (ft_strlen(s) < len)
        data = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (start >= ft_strlen(s) || len == 0)
        *data = '\0';
    else
        ft_strlcpy(data, &s[start], len + 1);
    return (data);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    char *str = ft_substr("Hey, 42tokyo!", 7, 5);
    printf("%s\n", str);

    char *str2 = ft_substr("Hey, 42tokyo!", 13, 5);
    printf("%s\n", str2);

    char *str3 = ft_substr(NULL, 7, 5);
    printf("%s\n", str3);
}*/