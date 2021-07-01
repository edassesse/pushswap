/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:39:49 by edassess          #+#    #+#             */
/*   Updated: 2021/07/01 14:23:37 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	get_smallest(int *tab, int n)
{
	int	ret;
	int	i;

	i = 0;
	ret = tab[i];
	while (++i < n)
		if (ret > tab[i])
			ret = tab[i];
	return (ret);
}

void	sort_tab(t_pile *tab)
{
	int				big;
	long long int	tmp;
	int				t_size;
	int				i;

	tmp = 2147483648;
	t_size = tab->ref_size;
	i = -1;
	big = get_smallest(tab->p_a, tab->a_size);
	while (t_size-- > 0)
	{
		while (++i < tab->ref_size)
		{
			if (tab->p_a[i] > big && (long long int)tab->p_a[i] < tmp)
				big = tab->p_a[i];
		}
		tab->p_ref[t_size] = big;
		tmp = (long long int)big;
		i = -1;
		big = get_smallest(tab->p_a, tab->a_size);
	}
	tab->p_ref[0] = get_smallest(tab->p_a, tab->a_size);
}
