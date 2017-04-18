/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 14:22:20 by framel            #+#    #+#             */
/*   Updated: 2016/06/07 13:05:53 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_checksign(char c, int *neg)
{
	if (c == 45)
	{
		*neg *= -1;
		return (1);
	}
	else if (c == 43)
		return (1);
	return (0);
}

int			ft_argtoi(const char *str)
{
	int i;
	int n;
	int neg;

	i = 0;
	n = 0;
	neg = 1;
	if (ft_checksign(str[i], &neg))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (n * neg);
}
