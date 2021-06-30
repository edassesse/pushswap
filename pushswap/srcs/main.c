/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:58:54 by edassess          #+#    #+#             */
/*   Updated: 2021/06/30 18:17:14 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	main(int ac, char **av)
{
	t_pile	*tab;

	tab = (t_pile *)malloc(sizeof(t_pile));
	if (ac < 2)
	{
		ft_putstr_fd("frr concentre toi\n", 1);
		exit(0);
	}
	av[ac] = NULL;
	ft_parsing(av, tab);
	tab->ref_size = tab_size(av);
	ft_sort(tab);
}
