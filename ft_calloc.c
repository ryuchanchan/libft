#include "libft.h"
#include <stdint.h>

void *ft_calloc(size_t count, size_t size)
{
    void *data;

    if (count)
        if (size > SIZE_MAX / count)
            return (NULL);
    data = malloc(count * size);
    if (!data)
        return (NULL);
    if (data)
        ft_bzero(data, count * size);
    return (data);
}

// #include <stdio.h>

// int main()
// {
//     // char *mem;

//     // mem = (char *)ft_calloc(1, 100);
//     // puts("input");
//     // //gets(mem);
//     // printf("%s\n", mem);
//     // free(mem);

//     unsigned char *s;
//     s = calloc(100000000000000, 10);
//     char *t = "abcdefghi";
//     int i = -1;
//     if (s == NULL)
//         printf("ok\n");
//     printf("%x\n", s[100000000000000000]);
//     while (++i < 20)
//         printf("i %i %i\n", i, s[i] == 0);
//     printf("%s\n", t);
// }