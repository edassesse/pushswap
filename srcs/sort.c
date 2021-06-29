/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:30:24 by edassess          #+#    #+#             */
/*   Updated: 2021/06/29 17:26:47 by edassess         ###   ########lyon.fr   */
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
	while (tab[size - 1] > ref)
		size--;
	if (i < t_size - size)
		ft_rotate(tab, "ra");
	else
		ft_rev_rotate(tab, "rra");
}

void	get_dir_p_b(int *tab, int ref, int size)
{
	int	i;
	int	t_size;

	i = -1;
	t_size = size;
	while (tab[++i] != ref)
		;
	while (tab[--size] != ref)
		;
	if (i < t_size - size)
		ft_rotate(tab, "rb");
	else
		ft_rev_rotate(tab, "rrb");
}

void	back_to_p_a(int *ref, int *p_a, int *p_b, int size)
{
	int	rank;
	int	i;
	int	count;

	count = 0;
	rank = size;
	i = 0;
	while (--rank)
	{
		if (ref[rank] != p_b[i])
			get_dir_p_b(p_b, ref[rank], size);
		else
			ft_push(p_b, p_a, "pa");
	}
}

void	big_sort(int *ref, int *p_a, int *p_b, int size)
{
	int	section;
	int	rank;
	int	tmp;

	section = 1;
	rank = 0;
	while (section < 5)
	{
		tmp = ref[(size / 4) * section];
		while (rank < (size / 4) * section)
		{
			if (p_a[0] < tmp && rank++)
				ft_push(p_a, p_b, "pb");
			else
				get_dir_p_a(p_a, tmp, size);
		}
		section++;
	}
	back_to_p_a(ref, p_a, p_b, size);
}


// for 100 nbr f ex

void	ft_sort(int **tab, int size)
{
	/*	if (size == 3)
		qqch;
		if (size <= 5 && size > 3)
		oueoueoue;
		if (size == 2)
		oui;*/
	// tab de fonction qui prend size comme index pour les differentes function;
	big_sort(tab[2], tab[0], tab[1], size);
}
