/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:58:54 by edassess          #+#    #+#             */
/*   Updated: 2021/07/01 18:23:11 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	free_tab(t_pile *tab)
{
	free(tab->p_a);
	free(tab->p_b);
	free(tab->p_ref);
	free(tab);
}

void	ft_error(char *s, t_pile *tab)
{
	ft_putstr_fd(s, 1);
	free_tab(tab);
	exit(0);
}

int	main(int ac, char **av)
{
	t_pile	*tab;

	if (ac < 2)
		return (0);
	tab = (t_pile *)malloc(sizeof(t_pile));
	av[ac] = NULL;
	ft_parsing(av, tab);
	tab->ref_size = tab_size(av);
	ft_sort(tab);
	free_tab(tab);
}
