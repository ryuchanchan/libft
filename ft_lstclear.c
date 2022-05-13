#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    tmp = *lst;

    if (lst && tmp)
    {
        while (*lst)
        {
            tmp =  (*lst)->next;
            ft_lstdelone(*lst, del);
            *lst = tmp;
        }
        *lst = NULL;
    }
}