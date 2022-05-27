#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *lst_count;
    int i;

    lst_count = lst;
    i = 0;
    while (lst_count != 0)
    {
        lst_count = lst_count ->next;
        i++;
    }
    return (i);
}

// #include <stdio.h> //warning出る
// int	main(void)
// {
//     char str1[] = "42";
//     t_list	*para;
//     para = ft_lstnew((void *)str1);
//     printf("%s\n", para->content);
//     int count = ft_lstsize(para);
//     printf("%d\n", count);
// }