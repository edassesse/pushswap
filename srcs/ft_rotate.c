/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:35:12 by edassess          #+#    #+#             */
/*   Updated: 2021/05/26 11:49:27 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

void	ft_rotate(int tab[])
{
	int	tmp;
	int	i;

	i = -1;
	tmp = tab[0];
	while (tab[++i + 1])
		tab[i] = tab[i + 1];
	tab[i] = tmp;
}

void	ft_rotate_rr(int tab1[], int tab2[])
{
	ft_rotate(tab1);
	ft_rotate(tab2);
	printf("rr\n");
}

void	ft_rotate_a(int tab[])
{
	ft_rotate(tab);
	printf("ra\n");
}

void	ft_rotate_b(int tab[])
{
	ft_rotate(tab);
	printf("rb\n");
}
