/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rykawamu </var/mail/rykawamu>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:46:31 by rykawamu          #+#    #+#             */
/*   Updated: 2022/05/28 15:47:08 by rykawamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main(void)
// {
//     char *s1 = "42";
//     char *s2 = "tokyo";
//     t_list **lst;
//     t_list *new;
//     t_list *next_list;
//     *lst = ft_lstnew(s1);
//     new = ft_lstnew(s2);
//     printf("%s\n", (*lst)->content);
//     ft_lstadd_front(lst, new);
//     while (*lst != NULL)
//     {
//         next_list = (*lst)->next;
//         printf("%s\n", (*lst)->content);
//         *lst = next_list;
//     }
// }