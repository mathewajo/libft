/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:33:36 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 13:11:55 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != 0 && del != 0)
	{
		del(lst->content);
		free(lst);
	}
}
