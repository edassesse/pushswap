/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:40:20 by edassess          #+#    #+#             */
/*   Updated: 2021/05/20 11:47:46 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_rotate(int tab[])
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
}

void	ft_rev_rotate_rr(int tab1[], int tab2[])
{
	ft_rev_rotate(tab1);
	ft_rev_rotate(tab2);
}
