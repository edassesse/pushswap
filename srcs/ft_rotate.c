/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:35:12 by edassess          #+#    #+#             */
/*   Updated: 2021/06/30 15:55:05 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

void	ft_rotate(int tab[], char *s, int size)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = tab[0];
	while (++i < size - 1)
		tab[i] = tab[i + 1];
	tab[i] = tmp;
	ft_putstr_fd(s, 1);
}
