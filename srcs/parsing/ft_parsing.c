/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:29:38 by edassess          #+#    #+#             */
/*   Updated: 2021/06/14 15:00:32 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

int	check_char(int ac, char **av)
{
	int	i;

	i = 0
		while (av[++i])
		{
			while (*av[i])
			{
				if (!ft_strchr(" 0123456789-", *av[i]))
					return (0);
				if (*av[i] == '-' && (!ft_isdigit(*av[i] + 1) || ft_isdigit(*av[i] - 1)))
					return (0);
				av[i]++
			}
			i++;
		}
	return (1);
}

int	count_nb(int ac, char **av)
{
	int	ret;
	int	i

	ret = 0;
	i = 0;
	while (av[++i])
	{
		while (*av[i])
		{
			while (*av[i] == ' ')
				av[i]++;
			if (*av[i] == '-')
				av[i]++;
			while (ft_isdigit(*av[i]))
				av[i]++;
			ret++;
		}
		i++;
	}
	return (ret);
}

long long int	*fill_tab(int ac, char **av)
{
	long long int	*ret;
	char			**tmp;
	int				i;

	i = 0;
	ret = (long long int *)malloc(sizeof(long long int) * count_nb);
	if (!ret)
	{
		printf("Error");
		return (NULL);
	}
	ret = fill_tab;
	return (ret);
}

int	ft_parsing(int ac, char **av)
{
	long long int	*tab;

	if (ac < 2)
		return (0);
	if (!check_char(av))
		return (0);
	tab = fill_tab(ac, av);
	if (!tab)
	{
		free_tab(tab);
		return (0);
	}
}
