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