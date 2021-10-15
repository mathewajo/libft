/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:04:37 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 14:19:26 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (lsrc);
	if (dstsize < ldst)
		return (lsrc + dstsize);
	else
	{
		while ((ldst + i) < dstsize && src[i] != '\0')
		{
			dst[ldst + i] = src[i];
			i++;
		}
		if (ldst < dstsize && ldst + i == dstsize)
			dst[ldst + i - 1] = '\0';
		else
			dst[ldst + i] = '\0';
		return (lsrc + ldst);
	}
}
