/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:35:12 by edassess          #+#    #+#             */
/*   Updated: 2021/05/20 11:38:28 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
}
