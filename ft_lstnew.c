#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *lists;

    lists = (t_list *)malloc(sizeof(t_list));
    if (lists == NULL)
        return (NULL);
    lists ->content = content;
    lists ->next = NULL;
    return (lists);
}