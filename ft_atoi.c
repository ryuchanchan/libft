#include "libft.h"

static int	check_sign(const char *str, int i,int *sign)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

static int check_space(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int ft_atoi(const char *str)
{
	int				sign;
	unsigned long int		num;
	size_t i;
	size_t count;
    
    i = 0;
	sign = 1;
	while (check_space(str[i]))
		i++;	
	i = check_sign(str, i, &sign);
	count = 0;
	num = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (count != 0)//?
			count++;
		num = (num * 10) + (str[i] - '0');
		if ((num > (unsigned long)LONG_MIN && sign == -1) || (count > 19 + '-'))
			return (0);
		if ((num > (unsigned long)LONG_MAX && sign == 1) || (count > 19))
			return (-1);
		i++;
	}
	return(num * sign);
}

#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_atoi("9223372036854775808"));
    printf("%d\n", ft_atoi("10"));
    printf("%d\n", ft_atoi("+123"));
    printf("%d\n", ft_atoi("-12345678"));
    printf("%d\n", ft_atoi("0005"));
    printf("%d\n", ft_atoi("-2147482648"));
	printf("%d\n", ft_atoi("36803488147419103232444888585858558588558585849499"));
	printf("%d\n", ft_atoi("000000000000000000008"));
	printf("%d\n", ft_atoi("-9223333333337203685477580822222222222685949494949499"));

	printf("-----\n");
	printf("%d\n", ft_atoi("19223372036854775806"));
	printf("%d\n", ft_atoi("18446744073709551616"));
	printf("%d\n", ft_atoi("6341068275337653680"));


}