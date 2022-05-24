#include "libft.h"

// char *ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
//        size_t needle_len;
//        size_t i;
       
//        needle_len = ft_strlen(needle);
//        if (needle_len == '\0')
//             return ((char *)haystack);
//        if (len < needle_len)
//             return (NULL);
//        if (len == needle_len)
//        {
//             if (!(ft_strncmp(haystack, needle, needle_len) == '\0'))
//                 return (NULL);
//             return ((char *)haystack);
//        }
//        i = 0;
//        while (i < len - needle_len + 1 && haystack[i] != '\0')
//        {
//            if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
//                 return ((char *)&haystack[i]);
//            i++;
//        }
//         return (NULL);
// }

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char    *s1 = "ab";
//     char    *s2 = "";
//     char    *i1 = strnstr(s1, s2, 9);
//     char    *i2 = ft_strnstr(s1, s2, 9);
//     printf("strnstr: %s\nft_strnstr: %s\n", i1, i2);
//     printf("----------------\n");

//     char    *ss1 = "abcdefghijk";
//     char    *ss2 = "efg";
//     char    *ii1 = strnstr(ss1, ss2, 11);
//     char    *ii2 = ft_strnstr(ss1, ss2, 11);
//     printf("strnstr: %s\nft_strnstr: %s\n", ii1, ii2);
//     printf("----------------\n");

//     char    *sss1 = "\0DE123  ab";
//     char    *sss2 = "D";
//     char    *iii1 = strnstr(sss1, sss2, 11);
//     char    *iii2 = ft_strnstr(sss1, sss2, 11);
//     printf("strnstr: %s\nft_strnstr: %s\n", iii1, iii2);
//     printf("----------------\n");

// char    *ssss1 = "abcdefghijk";
// char    *ssss2 = "efg";
// char    *iiii1 = strnstr(ssss1, ssss2, 2);
// char    *iiii2 = ft_strnstr(ssss1, ssss2, 2);
// printf("strnstr: %s\nft_strnstr: %s\n", iiii1, iiii2);
// }

char *ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;

	if (substr[0] == '\0')
		return ((char *)str);
	while (*str != '\0' && len-- > 0)
	{
		i = 0;
		while (*(str + i) == *(substr + i) && i < len)
		{
			i++;
			if (*(substr + i) == '\0')
				return ((char *)str);
		}
		str++;
	}
	return (0);
}