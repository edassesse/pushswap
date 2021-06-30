/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:39:37 by edassess          #+#    #+#             */
/*   Updated: 2021/06/30 18:16:41 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_swap(int tab[])
{
	int	tmp;

	tmp = tab[0];
	tab[0] = tab[1];
	tab[1] = tmp;
}

void	ft_swap_ss(int tab1[], int tab2[])
{
	ft_swap(tab1);
	ft_swap(tab2);
}
