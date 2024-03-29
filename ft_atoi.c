/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:53:05 by amathew           #+#    #+#             */
/*   Updated: 2021/09/05 12:30:34 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_vor(const char *str, int *i, int *v)
{
	if (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*v = -1;
		*i = *i + 1;
	}
}

int	ft_atoi(const char *str)
{
	int		i;
	int		v;
	long	a;

	i = 0;
	v = 1;
	a = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || \
			str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
		i++;
	ft_vor(str, &i, &v);
	if (!ft_isdigit(str[i]))
		return (0);
	while (ft_isdigit(str[i]))
	{
		a = (a * 10) + (str[i] - 48);
		if (a > 2147483647 && v == 1)
			return (-1);
		if (a < -2147483648 && v == -1)
			return (0);
		i++;
	}
	return ((int)(a * v));
}
