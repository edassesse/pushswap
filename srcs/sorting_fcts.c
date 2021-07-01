/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_fcts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:54:32 by edassess          #+#    #+#             */
/*   Updated: 2021/07/01 16:00:36 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	get_dir_p_a(int *tab, int ref, int size)
{
	int	i;
	int	t_size;

	t_size = size;
	i = -1;
	while (tab[++i] > ref)
		;
	while (tab[--size] > ref)
		;
	if (i < t_size - size)
		ft_rotate(tab, "ra\n", t_size);
	else
		ft_rev_rotate(tab, "rra\n", t_size);
}

void	get_dir_p_b(int *tab, int ref, int size)
{
	int	i;
	int	t_size;

	t_size = size;
	i = -1;
	while (tab[++i] != ref)
		;
	while (tab[--size] != ref)
		;
	if (i < t_size - size)
		ft_rotate(tab, "rb\n", t_size);
	else
		ft_rev_rotate(tab, "rrb\n", t_size);
}

void	back_to_p_a(t_pile *tab)
{
	int	rank;
	int	i;
	int	count;

	count = 0;
	rank = tab->ref_size - 1;
	i = 0;
	while (rank > 0)
	{
		if (tab->p_ref[rank] != tab->p_b[i])
			get_dir_p_b(tab->p_b, tab->p_ref[rank], tab->b_size);
		else
		{
			ft_push("pa\n", tab);
			rank--;
		}
	}
	ft_push("pa\n", tab);
}

int	is_sorted(int *tab, int size)
{
	int	i;

	i = 0;
	while (--size)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}
