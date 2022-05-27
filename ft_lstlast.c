#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst->next != 0)
        lst = lst->next;
    return (lst);
}


// #include <stdio.h>
// int main(void) {
//     char	str1[] = "42";
//     char	str2[] = "tokyo";

// 	t_list	*elem1;
// 	t_list	*elem2;
// 	t_list	*ret;
// 	if(!(elem1 = malloc(sizeof(t_list))))
// 	    return (0);
// 	if(!(elem2 = malloc(sizeof(t_list))))
// 		return (0);
//     elem1->next = elem2;
//     elem2->next = NULL;
//     //elem1->content = (void *)str1;
//     elem2->content = (void *)str2;
//     ret = ft_lstlast(elem1);
//     //printf("\n%s\n", (char *)elem1->content);
//     printf("\n%s\n", (char *)ret->content);
// }