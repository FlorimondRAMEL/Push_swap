/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/03 19:46:17 by framel            #+#    #+#             */
/*   Updated: 2016/06/07 18:39:33 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# define INT_MIN -2147483648
# define INT_MAX 2147483647

int	push_swap(int argc, char **argv, int *n, int bonus);
int	ft_is_double(int *taba);
int	ft_check_error(int argc, char **argv);
int	ft_error(void);
int	ft_rotate(int *tab);
int	ft_rev_rotate(int *tab);
int	ft_rotateti(int *tab);
int	ft_rev_rotateti(int *tab);
int	ft_rotateloop(int *tab, int *tabb);
int	ft_rev_rotateloop(int *tab, int *tabb);
int	ft_push(int *taba, int *tabb, int i);
int	ft_tabswap(int *tab);
int	ft_rotatend(int *tab);
int	ft_rev_rotatend(int *tab);
int	ft_pushnd(int *taba, int *tabb, int i);
int	ft_tabswapnd(int *tab);
int	ft_tabswapti(int *tab);
int	ft_tabswapbg(int *tab);
int	ft_opti(int *tab, int i);
int	ft_sorttab(int *taba, int *tabb, int i);
int	ft_sort_three(int *tab, int i);
int	ft_find_min(int *tab);
int	ft_issort(int *tab);
int ft_isdigitop(int c);
int ft_isstrint(const char *str);
int	ft_argtoi(const char *str);

#endif
