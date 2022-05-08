#include "libft.h"
#include <stdio.h>


// static int	check(char const *s, char c)//対象文字
// {
// 	size_t	i;
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }
static size_t	check(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_strndup(char const *s1, size_t n)
{
	size_t	i;
	char	*data;

	if (n < 0)
	{
		n = 0;
		while (s1[n] != '\0')
			n++;
	}
	data = (char *)malloc(sizeof(char) * (n + 1));
	if (!data)
		return (0);
	i = 0;
	while (i < n)
	{
		data[i] = s1[i];
		i++;
	}
	data[i] = '\0';
	return (data);
}

static char	**arrays(char **ss, size_t sc, const char *s, const char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = -1;
	while (++j < sc)
	{
		while (s[i] == c)
			i++;
		len = check(s + i, c);
		ss[j] = ft_strndup(s + i, len);
		if (ss[j] == NULL)
		{
			while (j--)
				free(ss[j]);
			free(ss);
			return (NULL);
		}
		i += len;
	}
	ss[j] = NULL;
	return (ss);
}

static size_t count_element_size(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (!s[0])
		return (0);
	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count+=1;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**splits;
	size_t		element_size;
	
	if (!s)
		return (NULL);
	element_size = count_element_size(s, c);
	splits = (char **)malloc(sizeof(char *) * (element_size + 1));
	if (!splits)
		return (0);
	arrays(splits, element_size + 1, (char *)s, c);

	return (splits);
}

int main(void)
{
	char **spi;
	int i = 0;

	spi = ft_split(",,,-42,tokyo_osaka ,nagoya,fukuoka, okinawa, - ,,,", ',');//9つ 最初と最後は数えない　連続したら無視する
	while (spi[i])
	{
		printf("%s\n", spi[i]);
		i++;
	}
	return (0);
}

// static void	arrays(char ***array_of_str, size_t sep_count, char *original_s, char sep)
// {
// 	size_t		i;
// 	size_t j;
// 	char	*strs;
// 	char	*start;

// 	strs = original_s;
// 	start = original_s;

// 	i = 0;
// 	j = -1;

// 	while (++j < sep_count)
// 	{
// 		while (i < sep_count)
// 	{
// 		if (!(*strs))
// 		{
// 			if (start != strs){
// 				(*array_of_str)[i++] = ft_strndup(start, (int)(strs - start));
// 			}
// 			while (check(strs, sep)){
// 				strs++;
// 			}
// 			start = strs;
// 			i++;
// 		}
// 		else
// 			strs++;
// 	}
// 	(*array_of_str)[i] = 0;
// }


// char	**ft_split(char const *s, char c)
// {
// 	char		**splits;
// 	size_t		element_size;
	
// 	if (!s)
// 		return (NULL);
// 	element_size = count_element_size(s, c);
// 	splits = (char **)malloc(sizeof(char *) * (element_size + 1));
// 	if (!splits)
// 		return (0);
// 	arrays(&splits, element_size + 1, (char *)s, c);
// 	// while (*s && !check(&s[i], c))
// 	// 	s++;
// 	return (splits);
// }