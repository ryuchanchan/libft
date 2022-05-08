#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *lists;
    int i;

    lists = lst;
    i = 0;
    while (lists != '\0')
    {
        if (lists == '\0')
        {
            lists[i - 1];
            lists = lists ->next;
            return (i);
        }
        i++;
    }
    return (i);
}
//間違ってそう
