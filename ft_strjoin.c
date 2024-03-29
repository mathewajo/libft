/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:51:38 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 14:13:17 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*a;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	a = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (a == 0)
		return (NULL);
	a[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		a[i] = s2[j];
		i++;
		j++;
	}
	return (a);
}
