/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:00:24 by edassess          #+#    #+#             */
/*   Updated: 2021/06/29 17:57:35 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	tab_size(char **s)
{
	int	ret = 0;
	int	i;
	int	j;

	i = 1;
	while (s[i])
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			if (s[i][j] ==  '-' && s[i][j - 1] != ' ' && \
					!ft_isdigit(s[i][j + 1]))
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

void	fill_tab(char **s, int **tab)
{
	int	i;
	int	j;
	int	i_tab;

	i  = 0;
	i_tab = 0;
	while (s[++i])
	{
		j = 0;
		while (s[i][j])
		{
			while (s[i][j] == ' ')
				j++;
			//check int max min;
			tab[0][i_tab++] = ft_atoi((s[i] + j));
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

int	**ft_parsing(char **s)
{
	int	**ret;
	int	size = 0;

	size = tab_size(s);
	ret = malloc(sizeof(int *) * 3);
	ret[0] = malloc(sizeof(int) * size);
	ret[1] = malloc(sizeof(int) * size);
	ret[2] = malloc(sizeof(int) * size);
	fill_tab(s, ret);
	check_dbl(ret[0], size);
	sort_tab(ret[0], ret[2], size);
	return (ret);
}

// add free fct when exit
