/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rykawamu </var/mail/rykawamu>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:28:56 by rykawamu          #+#    #+#             */
/*   Updated: 2022/05/28 15:31:32 by rykawamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*back_lst;

	back_lst = *lst;
	if (new && lst)
	{
		if (!(*lst))
			*lst = new;
		else
		{
			while (back_lst->next)
				back_lst = back_lst->next;
			back_lst->next = new;
		}
	}
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
//     ft_lstadd_back(lst, new);
//     while (*lst != NULL)
//     {
//         next_list = (*lst)->next;
//         printf("%s\n", (*lst)->content);
//         *lst = next_list;
//     }
// }