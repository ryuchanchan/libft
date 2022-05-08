#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *data;
    int i;

    data = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!data)
        return (NULL);
    i = 0;
    while (s1[i])
    {
      data[i] = s1[i];
      i++;
    }
    //data[i] = '\0';
    return (data);
}

#include <stdio.h>
#include <string.h>
#define STR "string"

int main()
{
    char *s;

    s = ft_strdup(STR);
    printf("s= %s\n", s);
    free(s);
}