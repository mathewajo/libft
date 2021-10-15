/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:57:21 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 14:51:47 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		l;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	l = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i < l)
		i++;
	while (ft_strrchr(set, s1[l]) && l > i)
	{
		l--;
	}
	if ((l + 1 - i) < 0)
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, i, l + 1 - i));
}
