/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 15:14:24 by framel            #+#    #+#             */
/*   Updated: 2016/06/07 18:30:38 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rev_rotate(int *tab)
{
	int	i;
	int	last;

	i = tab[0];
	last = tab[i];
	while (i > 1)
	{
		tab[i] = tab[i - 1];
		i--;
	}
	tab[i] = last;
	if (!ft_issort(tab))
		ft_putstr("rra ");
	else
		ft_putstr("rra");
	return (1);
}

int	ft_rotate(int *tab)
{
	int	i;
	int	first;

	i = 0;
	first = tab[1];
	while (i++ < tab[0] - 1)
	{
		tab[i] = tab[i + 1];
	}
	tab[i] = first;
	if (!ft_issort(tab))
		ft_putstr("ra ");
	else
		ft_putstr("ra");
	return (1);
}

int	ft_push(int *taba, int *tabb, int i)
{
	tabb[0]++;
	ft_rev_rotateti(tabb);
	tabb[1] = taba[1];
	ft_rotateti(taba);
	taba[0]--;
	if (i == 1)
	{
		if (!ft_issort(taba) || tabb[0])
			ft_putstr("pb ");
		else
			ft_putstr("pb");
	}
	else
	{
		if (!ft_issort(tabb) || taba[0])
			ft_putstr("pa ");
		else
			ft_putstr("pa");
	}
	return (1);
}

int	ft_tabswap(int *taba)
{
	int tmp;

	tmp = taba[1];
	taba[1] = taba[2];
	taba[2] = tmp;
	ft_putstr("sa ");
	return (1);
}
