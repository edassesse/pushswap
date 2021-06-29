/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:35:12 by edassess          #+#    #+#             */
/*   Updated: 2021/06/29 16:26:15 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

void	ft_rotate(int tab[], char *s)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = tab[0];
	while (tab[++i + 1])
		tab[i] = tab[i + 1];
	tab[i] = tmp;
	ft_putstr_fd(s, 1);
}
