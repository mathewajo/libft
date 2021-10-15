/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:39:52 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 13:27:03 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	char			*ss1;
	char			*ss2;

	ss1 = (char *) s1;
	ss2 = (char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && ss2[i] == ss1[i])
	{
		i++;
	}
	return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
}
