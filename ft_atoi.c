#include "libft.h"
#include <stdio.h>
#include <limits.h>

int ft_atoi(const char *str)
{
	int				sign;
	unsigned long int		num;
	size_t i;
    
    i = 0;
	sign = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
        if (str[i] == '-')
            sign *= -1;
		i++;
	}
	//9,223,372,036,854,775,807
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		if (num > (unsigned long)LONG_MIN && sign == -1)
			return (0);
		if (num > LONG_MAX && sign == 1)
			return (-1);
		i++;
	}
	return(num * sign);
}
// int main()
// {
//     char *input = "123";// +-23456

// 	int num = 4;
//     num = ft_atoi(input);
//     printf("%d\n", num);

//     //num1 = atoi(input);
//     printf("%d\n", atoi(input));
// }


#include <stdio.h>
int main(void)
{
    printf("%d\n", atoi("9223372036854775807"));
    printf("%d\n", ft_atoi("10"));
    printf("%d\n", ft_atoi("+123"));
    printf("%d\n", ft_atoi("-12345678"));
    printf("%d\n", ft_atoi("-99999999"));
    printf("%d\n", ft_atoi("-2147482648"));
    return (0);
}