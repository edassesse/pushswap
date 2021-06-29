/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:58:54 by edassess          #+#    #+#             */
/*   Updated: 2021/06/29 17:32:33 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int main(int ac, char **av)
{
	int	**tab;
	int	size;

	if (ac < 2)
	{
		ft_putstr_fd("frr concentre toi\n", 1);
		exit(0);
	}
	av[ac] = NULL;
	tab = ft_parsing(av);
	size = tab_size(av);
	ft_sort(tab, size);
	ft_putstr_fd("gg mec\n", 1);
}
