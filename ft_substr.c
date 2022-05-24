#include "libft.h"

// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     char        *data;
//     unsigned int lens;
//     unsigned int    i;

//     if (s)
//     {
//         lens = ft_strlen(s);
//         if (lens < start)
//         {
//             if (!(data = (char *)malloc(sizeof(*s) * 1)))
//                 return (NULL);
//             data[0] = '\0';
//             return (data);
//         }
//         if (!(data = malloc(sizeof(char) * (len + 1))))
//             return (NULL);
//         i = 0;
//         while (i < len)
//         {
//             data[i] = s[start + i];
//             i++;
//         }
//         data[i] = '\0';
//         return (data);
//     }
//     return (NULL);
// }

static int	lencheck(char const *s, unsigned int start, size_t len)
{
	if ((ft_strlen(s) - start) < len)
		return ((ft_strlen(s) - start));
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

    if (s)
    {
        if (ft_strlen(s) < start)
        {
            if (!(sub = (char *)malloc(sizeof(char))))
                return (NULL);
            sub[0] = '\0';
            return (sub);
        }
        if (!(sub = (char *)malloc(sizeof(char) * (lencheck(s, start, len) + 1))))
            return (NULL);
        i = 0;
        j = 0;
        while (s[i])
        {
            if (i >= start && j < len)//iがstartより大きいのはsの範囲内
            {
                sub[j] = s[i];
                j++;//startとlenの間はjが回って一つずつ取ってる
            }
            i++;
        }
        sub[j] = '\0';
        return (sub);
    }
    return (NULL);
}


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *str = ft_substr("Hey!,42tokyo!", 7, 5);
//     printf("%s\n", str);

//     char *str2 = ft_substr("Hey!,42tokyo!", 13, 5);
//     printf("%s\n", str2);

//     char *str3 = ft_substr(NULL, 7, 5);
//     printf("%s\n", str3);

//     //test2
//     char *str4 = ft_substr("tripouille", 0, 42000);
//     printf("%s\n", str4);
// }


// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     char        *data;
//     unsigned int lens;
//     unsigned int    i;

//     if (s)
//     {
//         lens = ft_strlen(s);
//         if (lens < start)
//         {
//             if (!(data = (char *)malloc(sizeof(*s) * 1)))
//                 return (NULL);
//             data[0] = '\0';
//             return (data);
//         }
//         if (!(data = malloc(sizeof(char) * (len + 1))))
//             return (NULL);
//         i = 0;
//         while (i < len)
//         {
//             data[i] = s[start + i];
//             i++;
//         }
//         data[i] = '\0';
//         return (data);
//     }
//     return (NULL);
// }

// char	*ft_startcheck(void)
// {
// 	char	*rtv;

// 	rtv = malloc(sizeof(char));
// 	if (rtv == 0)
// 		return (NULL);
// 	rtv[0] = '\0';
// 	return (rtv);
// }

// int	lencheck(char const *s, unsigned int start, size_t len)
// {
// 	if ((ft_strlen(s) - start) < len)
// 		return ((ft_strlen(s) - start));
// 	else
// 		return (len);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*sub;

// 	i = 0;
// 	j = 0;
// 	if (ft_strlen(s) < start)
// 		return (ft_startcheck());
// 	sub = (char *)malloc(sizeof(char) * (lencheck(s, start, len) + 1));
// 	if (sub == 0)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 		{
// 			sub[j] = s[i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	sub[j] = '\0';
// 	return (sub);
// }
