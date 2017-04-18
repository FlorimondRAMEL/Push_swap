/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 15:23:54 by framel            #+#    #+#             */
/*   Updated: 2016/06/07 15:24:35 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_double(int *taba)
{
	int	i;
	int j;

	i = 0;
	while (i++ < taba[0])
	{
		j = i;
		while (j++ < taba[0])
			if (taba[i] == taba[j])
				return (-1);
	}
	return (0);
}

int	ft_check_error(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (++i < argc)
	{
		while (argv[i][j] != '\0')
			if (!(ft_isdigitop(argv[i][j++])))
				return (-1);
		j = 0;
	}
	return (0);
}

int	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (-1);
}
