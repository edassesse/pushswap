/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:53:32 by edassess          #+#    #+#             */
/*   Updated: 2021/06/30 17:11:03 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	push_a(t_pile *tab)
{
	int	tmp;
	int	i;

	tmp = tab->p_a[0];
	i = -1;
	while (++i < tab->b_size)
		tab->p_b[i] = tab->p_b[i + 1];
	i = tab->a_size;
	while (i--)
		tab->p_a[i + 1] = tab->p_a[i];
	tab->p_a[0] = tmp;
	tab->b_size--;
	tab->a_size++;
	ft_putstr_fd("pa\n", 1);
}

void	push_b(t_pile *tab)
{
	int	tmp;
	int	i;

	tmp = tab->p_a[0];
	i = -1;
	while (++i < tab->a_size)
		tab->p_a[i] = tab->p_a[i + 1];
	i = tab->b_size;
	while (i--)
		tab->p_b[i + 1] = tab->p_b[i];
	tab->p_b[0] = tmp;
	tab->a_size--;
	tab->b_size++;
	ft_putstr_fd("pb\n", 1);
}

void	ft_push(char *s, t_pile *data)
{
	if (*(s + 1) == 'b')
		push_b(data);
	else
		push_a(data);
}
