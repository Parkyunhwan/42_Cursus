/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 03:20:58 by ypark             #+#    #+#             */
/*   Updated: 2020/12/28 23:26:58 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_head;
	t_list	*curr;

	if (!lst)
		return (0);
	n_head = ft_lstnew(f(lst->content));
	if (!n_head)
		return (0);
	curr = n_head;
	lst = lst->next;
	while (lst)
	{
		if (!(curr->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&n_head, del);
			return (0);
		}
		lst = lst->next;
		curr = curr->next;
	}
	return (n_head);
}
