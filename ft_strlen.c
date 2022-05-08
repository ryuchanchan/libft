#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    while (str[i] != '\0')
        i++;
    
    return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *str1 = "abcde";
//     printf("%zu\n", strlen(str1));

//     char *str2 = "abcde";
//     printf("%zu\n", ft_strlen(str2));

//     char *str3 = NULL;
//     printf("%zu\n", ft_strlen(str3));
// }