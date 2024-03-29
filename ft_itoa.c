/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 11:53:20 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 13:01:54 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_count(long n)
{
	int	c;

	c = 0;
	while (n != 0)
	{
		(n = n / 10);
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long	a;
	char	*b;
	int		c;

	a = n;
	c = ft_count(a);
	if (a <= 0)
		c++;
	b = ft_calloc(c + 1, 1);
	if (b == 0)
		return (b);
	b[c] = 0;
	if (a < 0)
		b[0] = '-';
	if (a < 0)
		a = a * -1;
	while (a != 0 || (c == 1 && b[c - 1] != '-'))
	{
		c--;
		b[c] = (a % 10) + 48;
		a = a / 10;
	}
	return (b);
}
