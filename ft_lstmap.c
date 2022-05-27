#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *create;
    t_list  *overwrite;

    if (!lst || !f)
        return (NULL);
    create = ft_lstnew(f(lst->content));
    if (!create)
        return (NULL);
    overwrite = create;
    lst = lst->next;
    while (lst != NULL)
    {
        overwrite->next = ft_lstnew(f(lst->content));
        if (overwrite->next == NULL)
        {
            ft_lstclear(&create, del);
            return (NULL);
        }
        overwrite = overwrite->next;
        lst = lst->next;
    }
    return (create);
}