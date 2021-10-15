/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:20:36 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 13:39:56 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*surc;
	int			i;

	dest = (char *)dst;
	surc = (char *)src;
	i = 0;
	if (dest > surc)
	{
		while (len > 0)
		{
			len--;
			dest[len] = surc[len];
		}
	}
	if (dest < surc)
	{
		while (len > 0)
		{
			len--;
			dest[i] = surc[i];
			i++;
		}
	}
	return (dst);
}
