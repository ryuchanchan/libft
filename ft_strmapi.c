#include "libft.h"

char *ft_strmapi(char const *s, char (f)(unsigned int, char))
{
    char *ss;
    unsigned int i;

    if (s == NULL)
        return (NULL);
    ss = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (ss == NULL)
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

// #include <stdio.h>
// char my_func(unsigned int i, char str)
// {
//     printf("My inner function: index = %d and %c\n", i, str);
//     return str - 32;
// }

// int main()
// {
//     char str[10] = "hello.";
//     printf("The result is %s\n", str);
//     char *result = ft_strmapi(str, my_func);
//     printf("The result is %s\n", result);
//     return 0;
// }