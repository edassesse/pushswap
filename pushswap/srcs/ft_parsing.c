/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:00:24 by edassess          #+#    #+#             */
/*   Updated: 2021/06/30 18:15:36 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	tab_size(char **s)
{
	int	ret;
	int	i;
	int	j;

	ret = 0;
	i = 1;
	while (s[i])
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			if (s[i][j] != ' ' && s[i][j] != '-' && !ft_isdigit(s[i][j]))
			{
				printf("merci louis\n");
				exit (0);
			}
			if (s[i][j] == '-' && ((s[i][j - 1] != ' ' && s[i][j - 1] != '\0') \
						|| (!ft_isdigit(s[i][j + 1]) || s[i][j + 1] == '\0')))
			{
				ft_putstr_fd("error 1\n", 1);
				exit(0);
			}
			if (s[i][j] == '-')
				j++;
			while (ft_isdigit(s[i][j]))
				j++;
			ret++;
			while (s[i][j] == ' ')
				j++;
		}
		i++;
	}
	return (ret);
}

void	fill_tab(char **s, t_pile *tab)
{
	int	i;
	int	j;
	int	i_tab;

	i = 0;
	i_tab = 0;
	while (s[++i])
	{
		j = 0;
		while (s[i][j])
		{
			while (s[i][j] == ' ')
				j++;
			//check int max min;
			tab->p_a[i_tab++] = ft_atoi(s[i] + j);
			while (ft_strchr("0123456789-", s[i][j]))
				j++;
			while (s[i][j] == ' ')
				j++;
		}
	}
}

void	check_dbl(int *tab, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
			{
				ft_putstr_fd("doublons", 1);
				exit (0);
			}
			j++;
		}
	}
}

void	ft_parsing(char **s, t_pile *tab)
{
	int	size;

	size = tab_size(s);
	if (size == 0)
	{
		ft_putstr_fd("C'est vide frr\n", 1);
		exit (0);
	}
	tab->a_size = size;
	tab->b_size = 0;
	tab->ref_size = size;
	tab->p_a = malloc(sizeof(int) * size);
	tab->p_b = malloc(sizeof(int) * size);
	tab->p_ref = malloc(sizeof(int) * size);
	fill_tab(s, tab);
	check_dbl(tab->p_a, size);
	sort_tab(tab);
}

// add free fct when exit
