/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:30:24 by edassess          #+#    #+#             */
/*   Updated: 2021/06/30 18:33:53 by edassess         ###   ########lyon.fr   */
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

void	big_sort(t_pile *tab)
{
	int	section;
	int	rank;
	int	tmp;
	int	div;

	div = ((tab->a_size <= 100) * 4 + !(tab->a_size <= 100) * 10);
	if (tab->a_size < 21)
		div = 2;
	section = 1;
	rank = 0;
	if (!is_sorted(tab->p_a, tab->a_size))
	{
		while (section < div && rank < tab->ref_size)
		{
			tmp = tab->p_ref[((tab->ref_size / div) * section) - 1];
			while (rank < (((tab->ref_size / div) * section)) && tab->a_size)
			{
				if (tab->p_a[0] <= tmp)
				{
					rank++;
					ft_push("pb\n", tab);
				}
				else
					get_dir_p_a(tab->p_a, tmp, tab->a_size);
			}
			section++;
		}
		while (rank++ < tab->ref_size)
			ft_push("pb\n", tab);
		back_to_p_a(tab);
	}
}

void	ft_sort(t_pile *tab)
{
	/*	if (size == 3)
		qqch;
		if (size <= 5 && size > 3)
		oueoueoue;
		if (size == 2)
		oui;*/
	// tab de fonction qui prend size comme index pour les differentes function;
/*		int i = 0;
		while (tab->ref_size--)
		{
		printf("p_ref[%d] ==%d\n",i, tab->p_ref[i]);
		i++;
		}*/
	big_sort(tab);
}
