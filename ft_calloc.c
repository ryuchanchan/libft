#include "libft.h"

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

/*#include <stdio.h>
int main()
{
    int *mem,*p;
    int i;

    mem = (int *)ft_calloc(500,sizeof(int));
    p = mem;
    for (i=0; i<500; i++) {
        *p = i;
        printf("%d ",*p);
        p++;
    }
    free(mem);
}*/