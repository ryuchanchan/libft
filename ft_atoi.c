#include "libft.h"

int ft_atoi(const char *str)
{
	int				sign;
	unsigned long int		num;
	size_t i;
    
    i = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
        if (str[i] == '-')
            sign *= -1;
		i++;
	}
	num = 0;
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

// #include <stdio.h>
// int main(void)
// {
//     printf("%d\n", ft_atoi("9223372036854775808"));
//     printf("%d\n", ft_atoi("10"));
//     printf("%d\n", ft_atoi("+123"));
//     printf("%d\n", ft_atoi("-12345678"));
//     printf("%d\n", ft_atoi("-99999999"));
//     printf("%d\n", ft_atoi("-2147482648"));
// }