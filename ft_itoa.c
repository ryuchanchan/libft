#include "libft.h"

static int	num_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n /= 10;//3桁のために3回わって１のくらいずつiで出す
    }
	return (i);
}

char	*ft_itoa(int n)
{
	char            *convert_c;
    int             nums;
	unsigned int    digits;

	digits = num_size(n);
    convert_c = ft_calloc((digits + 1), sizeof(char));
	if (convert_c)
	{
        nums = n;
	    if (n == 0)
		    convert_c[digits - 1] = 0 + '0';
	    if (n < 0)//マイナスのサイズを確保してる
	    {
		    if (n <= INT_MIN)
			    n++;
		    n *= -1;
            convert_c[0] = '-';
	    }
        while (n)
        {
            convert_c[digits - 1] = n % 10 + '0';//3, 2, 1 ,0
            n /= 10;
            digits--;
        }
        if (nums == INT_MIN)
            convert_c[10] = '8';
		return (convert_c);
	}
	return (NULL);
}

/*#include <stdio.h>
int main()
{
    // int a = 12345678;
    // int b = -12345678;
    int c = -123;

    // char *n = ft_itoa(a);
    // char *nn = ft_itoa(b);
    char *nnn = ft_itoa(c);

    // printf("%s\n", n);
    // printf("%s\n", nn);
    printf("%s\n", nnn);
}*/