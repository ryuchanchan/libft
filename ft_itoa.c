#include "libft.h"

static size_t get_s(size_t n)
{
    int size;

    size = 1;
    while (n / 10 != 0)
    {
        n /= 10;
        size++;
    }
    if (n < 0)
        size++;
    return (size);
}

char *ft_itoa(int n)
{
    char *convert;
    unsigned int i;
    unsigned int size;

    size = get_s(n);
    convert = (char *)malloc((size + 1) * sizeof(char));
    if (!(convert))
        return (NULL);
    if (n < 0)
    {
        i = n * -1;
        convert[0] = '-';
    }
    else
        i = n;
    convert[size] = 0;
    while (i / 10 != 0)
    {
        convert[--size] = '0' + i % 10;
        i /= 10;
    }
    convert[--size] = '0' + i % 10;
    return (convert);
}

#include <stdio.h>
int main()
{
    int i = 12345678;
    int j = -12345678;

    char *n = ft_itoa(i);
    char *nn = ft_itoa(j);

    printf("%s\n", n);
    printf("%s\n", nn);
}