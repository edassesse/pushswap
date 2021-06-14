/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:20:18 by edassess          #+#    #+#             */
/*   Updated: 2021/06/14 11:27:56 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

int	ft_fill_tab(int tab[], int ac, char **av)
{
	int	i;
	int	j;
	long int	tmp;

	i = 0;
	j = 1;
//	tmp = ft_;
		while (av[j])
			;
		return (1);
}

int	ft_parstab(char *s)
{
	while (*s)
	{
		if (!(*s == '-' && *(s - 1) == ' ') && !ft_isdigit(*s) && *s != ' ')
			return (0);
		s++;
	}
	return (1);
}

int	ft_parsing(int ac, char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (ft_strchr(av[i], ' ') && !ft_parstab(av[i]))
			return (0);
		else
		{
			if (!*av[i])
				return (0);
			if (*av[i] == '-')
				av[i]++;
			while (*av[i])
				if (!ft_isdigit(*av[i]++))
					return (0);
		}
		i++;
	}
	return (1);
}
