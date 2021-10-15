/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:19:44 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 14:28:40 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	unsigned int	i;

	i = 0;
	if (s == 0 || f == 0)
		return (0);
	a = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (a == 0 || s == 0 || f == 0)
		return (0);
	while (s[i] != 0)
	{
		a[i] = f(i, s[i]);
		i++;
	}
	return (a);
}
