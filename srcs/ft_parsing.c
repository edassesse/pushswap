/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:00:24 by edassess          #+#    #+#             */
/*   Updated: 2021/07/01 16:34:26 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	checkint(char *s)
{
	char	*tmp;
	int		len;

	tmp = s;
	len = 0;
	if (*s == '-')
		s++;
	while (ft_isdigit(*s++))
		len++;
	if (len > 10)
		return (0);
	if (len == 10)
	{
		if (*tmp == '-')
		{
			tmp++;
			if (ft_strncmp("2147483648", tmp, 10) < 0)
				return (0);
		}
		else if (ft_strncmp("2147483647", tmp, 10) < 0)
			return (0);
	}
	return (1);
}

int	tab_size(char **s)
{
	int	ret;
	int	i;
	int	j;

	ret = 0;
	i = 0;
	while (s[++i])
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			if (s[i][j] != ' ' && s[i][j] != '-' && !ft_isdigit(s[i][j]))
				ft_error("Error:\tNot a number\n", NULL);
			if (s[i][j] == '-' && ++j && \
					((s[i][j - 2] != ' ' && s[i][j - 2] != '\0') \
					 || (!ft_isdigit(s[i][j]) || s[i][j] == '\0')))
				ft_error("Error:\tTrailing '-'\n", NULL);
			if (ft_isdigit(s[i][j]) && ret++ > -1)
				while (ft_isdigit(s[i][j]))
					j++;
			while (s[i][j] == ' ')
				j++;
		}
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
			if (!checkint(s[i] + j))
				ft_error("Error:\tNot an int\n", tab);
			if (!s[i][j])
				ft_error("Error:\tEmpty string\n", tab);
			tab->p_a[i_tab++] = ft_atoi(s[i] + j);
			while (ft_strchr("0123456789-", s[i][j]))
				j++;
			while (s[i][j] == ' ')
				j++;
		}
	}
}

void	check_dbl(int *tab, int size, t_pile *data)
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
				ft_error("Error: Duplicate numbers\n", data);
			j++;
		}
	}
}

void	ft_parsing(char **s, t_pile *tab)
{
	int	size;

	size = tab_size(s);
	if (size == 0)
		exit (0);
	tab->a_size = size;
	tab->b_size = 0;
	tab->ref_size = size;
	tab->p_a = malloc(sizeof(int) * size);
	tab->p_b = malloc(sizeof(int) * size);
	tab->p_ref = malloc(sizeof(int) * size);
	fill_tab(s, tab);
	check_dbl(tab->p_a, size, tab);
	sort_tab(tab);
}
