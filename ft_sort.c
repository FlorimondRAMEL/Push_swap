/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 15:19:23 by framel            #+#    #+#             */
/*   Updated: 2016/06/07 18:56:12 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_opti(int *tab, int i)
{
	i += ft_tabswapti(tab);
	if (ft_issort(tab))
	{
		ft_putstr("sa ");
		return (i);
	}
	else
		i -= ft_tabswapti(tab);
	return (i);
}

int	ft_sorttab(int *taba, int *tabb, int i)
{
	int min_box;

	while (tabb[0] != 0 || !ft_issort(taba))
	{
		while (!ft_issort(taba))
		{
			if (taba[0] >= 2 && taba[1] > taba[2])
				i = ft_opti(taba, i);
			min_box = ft_find_min(taba);
			if (taba[0] - min_box >= min_box)
				while (--min_box > 0)
					i += ft_rotateloop(taba, tabb);
			else
				while (min_box++ <= taba[0])
					i += ft_rev_rotateloop(taba, tabb);
			if (!ft_issort(taba))
				i += ft_push(taba, tabb, 1);
		}
		while (tabb[0])
			i += ft_push(tabb, taba, 2);
	}
	return (i);
}

int	ft_sort_three(int *tab, int i)
{
	if (!ft_issort(tab))
	{
		if (tab[1] > tab[2] && tab[2] > tab[3])
		{
			i += ft_tabswap(tab);
			i += ft_rev_rotatend(tab);
		}
		else if (tab[1] > tab[2] && tab[2] < tab[3])
			if (tab[1] > tab[3])
				i += ft_rotatend(tab);
			else
				i += ft_tabswapnd(tab);
		else if (tab[1] < tab[2] && tab[2] > tab[3])
		{
			i += ft_rev_rotatend(tab);
			if (!ft_issort(tab))
				i += ft_tabswapbg(tab);
		}
		else if (tab[1] > tab[2] && tab[2] < tab[3])
			i += ft_rotatend(tab);
	}
	return (i);
}
