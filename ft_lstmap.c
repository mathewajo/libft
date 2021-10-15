/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:42:30 by amathew           #+#    #+#             */
/*   Updated: 2021/09/01 15:46:35 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = 0;
	while (lst != 0)
	{
		if (lst->content != 0)
		{
			tmp = ft_lstnew(f(lst->content));
			ft_lstadd_back(&new, tmp);
		}
		else
			ft_lstclear(&new, del);
		lst = lst->next;
	}
	return (new);
}
