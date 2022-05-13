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
    lst = lst->next;//第二リストにインクリメントする
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
}//適応させた新しいリスト
// 	/* 5 6 7 8 */ for (int i = 0; i < 4; ++i)
// 	{
// 		check(*(int*)tmp->content == i + 1);
// 		tmp = tmp->next;
// 	}
// 	freeList(l); ft_lstclear(&m, free); showLeaks();
// 	write(1, "\n", 1);
// 	return (0);
// }