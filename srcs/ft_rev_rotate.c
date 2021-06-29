/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:40:20 by edassess          #+#    #+#             */
/*   Updated: 2021/06/29 17:22:14 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_rev_rotate(int tab[], char *s)
{
	int	tmp;
	int	i;

	i = -1;
	while (tab[++i])
		;
	tmp = tab[i - 1];
	while (--i)
		tab[i] = tab[i - 1];
	tab[0] = tmp;
	ft_putstr_fd(s, 1);
}

void	ft_rev_rotate_rr(int tab1[], int tab2[])
{
	ft_rev_rotate(tab1, NULL);
	ft_rev_rotate(tab2, "rrr");
}
