/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 15:27:41 by framel            #+#    #+#             */
/*   Updated: 2016/06/07 18:39:23 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(int *tab)
{
	int	i;
	int min;
	int min_box;

	i = 0;
	min = INT_MAX;
	min_box = 0;
	while (i++ < tab[0])
	{
		if (min > tab[i])
		{
			min = tab[i];
			min_box = i;
		}
	}
	return (min_box);
}

int	ft_issort(int *tab)
{
	int	i;

	i = 0;
	while (i++ < tab[0] - 1)
		if (tab[i] > tab[i + 1])
			return (0);
	return (1);
}
