#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    // ft_memset(s, '\0', n);
    unsigned char *ss;

    if (s)
    {
        ss = (unsigned char *)s;
        while (n--)
        {
            *(ss++) = 0;
        }
        
    }
}

#include <string.h>
#include <stdio.h>
int main()
{
    char p[5] = {1, 2, 3, 4, 5};
    // printf("%d\n", p[2]);
    for (int i = 0; i < 5; i++)
    {
        bzero(p, 3);
        printf("%d\n", p[i]);
    }

    printf("-------------\n");

    char pp[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        ft_bzero(pp, 3);
        printf("%d\n", pp[i]);
    }
    
}