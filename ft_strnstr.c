/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:44:17 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 14:44:38 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[j] != '\0' && (((j + i + 1) < len) || (len == 1)))
	{
		i = 0;
		while (haystack[j + i] == needle[i] && needle[i] != 0 && (j + i) < len)
		{
			i++;
		}
		if (needle[i] == '\0')
			return ((char *)(haystack + j));
		j++;
	}
	if (needle[i] == '\0')
		return ((char *)(haystack + j));
	return (0);
}
