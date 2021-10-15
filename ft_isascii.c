/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amathew <amathew@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:58:59 by amathew           #+#    #+#             */
/*   Updated: 2021/09/04 12:58:15 by amathew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int v)
{
	if (v <= 0177 && v >= 0)
		return (1);
	else
		return (0);
}