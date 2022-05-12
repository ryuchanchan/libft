#include "libft.h"

static unsigned int get_num_size(int n)//123
{
    unsigned int i;

    i = 1;
    while (n /= 10)// 0.1, 0.2, 0.3これしな大きい数字無限ループする
    {
        i++;
    }
    // if (n < 0)
    //     i++;
    //printf("%d\n", i);
    return (i);//3
}

char *ft_itoa(int n)
{
    char *convert_c;
    unsigned int i;
    unsigned int num_size;
    
    num_size = get_num_size(n);
    convert_c = (char *)malloc((sizeof(char) * num_size + 1));
    if (!(convert_c))
        return (NULL);
    i = n;//-123
    if (n < 0)
    {
        i = n * -1;//123
        num_size++;//4（これはマイナスのサイズを確保してる）
    }
    convert_c[num_size] = 0;
	while (num_size--)//3,2,1,0
	{
		convert_c[num_size] = i % 10 + '0';//3, 2, 1 ,0
		i /= 10;//12, 1, 0, 0
	}
    if (n < 0)
    {
        convert_c[0] = '-';
    }
    return (convert_c);
}

#include <stdio.h>
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
}