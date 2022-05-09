#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *start;
    t_list  *cur;

    start = ft_lstnew(f(lst->content));
    if (start == NULL)
        return (NULL);
    cur = start;
    while (1)
    {
        if (lst->next == NULL)
            break ;
        cur->next = ft_lstnew(f(lst->content));
        if (cur->next == NULL)
        {
            ft_lstclear(&start, del);
            return (NULL);
        }
        cur = cur->next;
        lst = lst->next;    
    }
    return (start);
}