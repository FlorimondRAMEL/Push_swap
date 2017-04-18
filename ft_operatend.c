/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operatend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 17:15:48 by framel            #+#    #+#             */
/*   Updated: 2016/06/07 17:26:30 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rev_rotatend(int *tab)
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
	ft_putstr("rra");
	return (1);
}

int	ft_rotatend(int *tab)
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
	ft_putstr("ra");
	return (1);
}

int	ft_pushnd(int *taba, int *tabb, int i)
{
	tabb[0]++;
	ft_rev_rotate(tabb);
	tabb[1] = taba[1];
	ft_rotate(taba);
	taba[0]--;
	if (i == 1)
		ft_putstr("pa");
	if (i == 2)
		ft_putstr("pb");
	return (1);
}

int	ft_tabswapnd(int *taba)
{
	int tmp;

	tmp = taba[1];
	taba[1] = taba[2];
	taba[2] = tmp;
	ft_putstr("sa");
	return (1);
}

int	ft_tabswapbg(int *taba)
{
	int tmp;

	tmp = taba[1];
	taba[1] = taba[2];
	taba[2] = tmp;
	ft_putstr(" sa");
	return (1);
}
