/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:05:24 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 14:23:48 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t	ft_strlen(const char *c)
{
	size_t	counter;

	counter = 0;
	while (c[counter] != '\0')
		counter++;
	return (counter);
}
