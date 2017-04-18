/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 13:10:40 by framel            #+#    #+#             */
/*   Updated: 2016/06/07 19:02:40 by framel           ###   ########.fr       */
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

int			ft_isstrint(const char *str)
{
	int			i;
	long int	n;
	int			neg;

	i = 0;
	n = 0;
	neg = 1;
	if (ft_checksign(str[i], &neg))
		i++;
	if (!ft_isdigit(str[i]))
		return (-1);
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (neg == 1)
		{
			if ((n = n * 10 + str[i] - 48) > INT_MAX)
				return (-1);
		}
		else if ((n = n * 10 + str[i] - 48) > INT_MIN * -1)
			return (-1);
		i++;
	}
	if (str[i] != '\0')
		return (-1);
	return (0);
}
