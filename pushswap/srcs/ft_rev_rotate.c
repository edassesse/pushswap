/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:40:20 by edassess          #+#    #+#             */
/*   Updated: 2021/06/30 17:59:08 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_rev_rotate(int tab[], char *s, int size)
{
	int	tmp;
	int	i;

	i = size;
	tmp = tab[size - 1];
	while (--i)
		tab[i] = tab[i - 1];
	tab[0] = tmp;
	ft_putstr_fd(s, 1);
}
