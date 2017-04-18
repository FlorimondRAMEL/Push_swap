/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operate_bis.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 18:29:26 by framel            #+#    #+#             */
/*   Updated: 2016/06/07 18:34:57 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rev_rotateloop(int *tab, int *tabb)
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
	if (!ft_issort(tab) || tabb[0])
		ft_putstr("rra ");
	else
		ft_putstr("rra");
	return (1);
}

int	ft_rotateloop(int *tab, int *tabb)
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
	if (!ft_issort(tab) || tabb[0])
		ft_putstr("ra ");
	else
		ft_putstr("ra");
	return (1);
}

int	ft_rev_rotateti(int *tab)
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
	return (1);
}

int	ft_rotateti(int *tab)
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
	return (1);
}

int	ft_tabswapti(int *taba)
{
	int tmp;

	tmp = taba[1];
	taba[1] = taba[2];
	taba[2] = tmp;
	return (1);
}
