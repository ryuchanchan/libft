#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
       size_t needle_len;
       size_t i;

       needle_len = ft_strlen(needle);
       if (needle_len == 0)
           return ((char *)haystack);
       if (len < needle_len)
           return (NULL);
       if (len == needle_len)
       {
           if (ft_strncmp(haystack, needle, needle_len) == 0)
               return ((char *)haystack);
            return (NULL);
       }
       i = 0;
       while (i < len - needle_len + 1 && haystack[i] != '\0')
       {
           if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
                return ((char *)&haystack[i]);
           i++;
       }
       return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char    *s1 = "ab";//\0DE123  ab
//     char    *s2 = "efg";
//     // size_t  max = strlen(s2);
//     char    *i1 = strnstr(s1, s2, 9);
//     char    *i2 = ft_strnstr(s1, s2, 9);
//     printf("strnstr: %s\nft_strnstr: %s\n", i1, i2);

//     char    *ss1 = "abcdefghijk";//\0DE123  ab
//     char    *ss2 = "efg";
//     char    *ii1 = strnstr(ss1, ss2, 11);
//     char    *ii2 = ft_strnstr(ss1, ss2, 11);
//     printf("strnstr: %s\nft_strnstr: %s\n", ii1, ii2);
// }