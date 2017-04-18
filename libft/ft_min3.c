/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 15:42:22 by framel            #+#    #+#             */
/*   Updated: 2016/05/27 15:43:35 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min3(int a, int b, int c)
{
	int min;

	min = a < b ? a : b;
	min = min < c ? min : c;
	return (min);
}