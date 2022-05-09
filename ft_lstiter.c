#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *lst2;

    lst2 = lst;
    while (lst2)
    {
        f(lst2->content);
        lst2 = lst2->next;
    }
}