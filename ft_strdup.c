/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:40:13 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 14:07:50 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	size_t	l;

	l = ft_strlen(s1) + 1;
	a = malloc(l);
	if (a == 0)
		return (NULL);
	a = ft_memcpy(a, s1, l);
	return (a);
}
