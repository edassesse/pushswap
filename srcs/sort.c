/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:30:24 by edassess          #+#    #+#             */
/*   Updated: 2021/07/01 16:01:00 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	nb_sort_3(t_pile *tab)
{
	if (tab->p_a[0] == tab->p_ref[tab->ref_size - 3] \
			&& tab->p_a[1] == tab->p_ref[tab->ref_size - 1])
	{
		ft_rev_rotate(tab->p_a, "rra\n", 3);
		ft_swap(tab->p_a, "sa\n");
	}
	else if (tab->p_a[0] == tab->p_ref[tab->ref_size - 2] \
			&& tab->p_a[1] == tab->p_ref[tab->ref_size - 3])
		ft_swap(tab->p_a, "sa\n");
	else if (tab->p_a[0] == tab->p_ref[tab->ref_size - 1] \
			&& tab->p_a[1] == tab->p_ref[tab->ref_size - 3])
		ft_rotate(tab->p_a, "ra\n", 3);
	else if (tab->p_a[0] == tab->p_ref[tab->ref_size - 1] \
			&& tab->p_a[1] == tab->p_ref[tab->ref_size - 2])
	{
		ft_swap(tab->p_a, "sa\n");
		ft_rev_rotate(tab->p_a, "rra\n", 3);
	}
	else if (tab->p_a[0] == tab->p_ref[tab->ref_size - 2] \
			&& tab->p_a[1] == tab->p_ref[tab->ref_size - 1])
		ft_rev_rotate(tab->p_a, "rra\n", 3);
}

void	small_sort(t_pile *tab)
{
	while (tab->a_size > 3)
	{
		if (tab->p_a[0] < tab->p_ref[tab->ref_size - 3])
			ft_push("pb\n", tab);
		else
			get_dir_p_a(tab->p_a, tab->p_ref[tab->ref_size - 4], tab->a_size);
	}
	if (is_sorted(tab->p_b, tab->b_size) && tab->b_size > 1)
		ft_swap(tab->p_b, "sb\n");
	nb_sort_3(tab);
	while (tab->b_size)
		ft_push("pa\n", tab);
}

void	big_sort(t_pile *tab)
{
	int	section;
	int	rank;
	int	tmp;
	int	div;

	div = ((tab->a_size <= 100) * 4 + !(tab->a_size <= 100) * 10);
	if (tab->a_size < 21)
		div = 2;
	section = 0;
	rank = 0;
	if (!is_sorted(tab->p_a, tab->a_size))
	{
		while (++section < div && rank < tab->ref_size)
		{
			tmp = tab->p_ref[((tab->ref_size / div) * section) - 1];
			while (rank < (((tab->ref_size / div) * section)) && tab->a_size)
				if (tab->p_a[0] <= tmp && ++rank)
					ft_push("pb\n", tab);
			else
				get_dir_p_a(tab->p_a, tmp, tab->a_size);
		}
		while (rank++ < tab->ref_size)
			ft_push("pb\n", tab);
		back_to_p_a(tab);
	}
}

void	ft_sort(t_pile *tab)
{
	if (!is_sorted(tab->p_a, tab->ref_size))
	{
		if (tab->ref_size == 2)
			ft_rotate(tab->p_a, "ra\n", 2);
		else if (tab->ref_size == 3)
			nb_sort_3(tab);
		else if (tab->ref_size > 5)
			big_sort(tab);
		else
			small_sort(tab);
	}
	exit(0);
}
