/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/03 16:38:02 by framel            #+#    #+#             */
/*   Updated: 2016/06/07 20:05:24 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_writetab(int *tab)
{
	int	i;

	i = 0;
	ft_putchar('\n');
	ft_putstr("Pile finale: ");
	while (i++ < tab[0])
	{
		ft_putnbr(tab[i]);
		if (i < tab[0])
			ft_putchar(' ');
	}
	return (0);
}

int	ft_bonus(int *argc, char ***argv)
{
	if ((*argv)[1][0] == '-' && (*argv)[1][1] == 'n' && (*argv)[1][2] == 0)
	{
		*argc = *argc - 1;
		*argv = *argv + 1;
		return (1);
	}
	else if ((*argv)[1][0] == '-' && (*argv)[1][1] == 'p' && (*argv)[1][2] == 0)
	{
		*argc = *argc - 1;
		*argv = *argv + 1;
		return (2);
	}
	return (0);
}

int	push_swap(int argc, char **argv, int *n, int bonus)
{
	int i;
	int	taba[argc];
	int tabb[argc];

	i = 0;
	taba[0] = argc - 1;
	tabb[0] = 0;
	while (++i < argc)
		if (ft_isstrint(argv[i]))
			return (-1);
		else
			taba[i] = ft_argtoi(argv[i]);
	if (ft_is_double(taba))
		return (-1);
	i = 0;
	if (taba[0] != 3)
		i = ft_sorttab(taba, tabb, i);
	else
		i = ft_sort_three(taba, i);
	if (bonus & 2)
		ft_writetab(taba);
	*n = i;
	return (0);
}

int	main(int argc, char **argv)
{
	int bonus;
	int	n;

	bonus = 0;
	if (argc == 1)
		return (0);
	bonus += ft_bonus(&argc, &argv);
	bonus += ft_bonus(&argc, &argv);
	if (ft_check_error(argc, argv) || push_swap(argc, argv, &n, bonus))
		return (ft_error());
	ft_putchar('\n');
	if (bonus & 1)
	{
		ft_putstr("Nombre d'operations: ");
		ft_putnbr(n);
		ft_putchar('\n');
	}
	return (0);
}
