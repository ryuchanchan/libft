#include "libft.h"
#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    char *ss;

    if (s)
    {
        ss = s;
        while (n--)
        {
            *ss++ = 0;
        }
        
    }
    
}