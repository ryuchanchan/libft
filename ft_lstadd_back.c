#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *back_lst;

    back_lst = *lst;
    if (!(*lst))
        *lst = new;
    else
    {
        while (back_lst->next)
            back_lst = back_lst->next;
        back_lst->next = new;
    }
}