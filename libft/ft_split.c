/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:55:53 by edassess          #+#    #+#             */
/*   Updated: 2021/05/06 17:36:06 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbtab(char const *s, char c)
{
	size_t	nbtab;

	nbtab = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			nbtab++;
		while (*s && *s != c)
			s++;
	}
	return (nbtab);
}

char	**ft_split(char const *s, char c)
{
	char	**s_ret;
	size_t	nb_tab;
	int		i;

	i = 0;
	nb_tab = ft_nbtab(s, c);
	if (!s)
		return (NULL);
	s_ret = ft_calloc(sizeof(char *), nb_tab + 1);
	if (!s_ret)
		return (0);
	while (nb_tab--)
	{
		while (*s == c)
			s++;
		if (!ft_strchr(s, c))
			c = 0;
		s_ret[i] = ft_substr(s, 0, ft_strchr(s, c) - s);
		if (!s_ret[i++])
			return (s_ret);
		s = ft_strchr(s, c);
	}
	s_ret[i] = NULL;
	return (s_ret);
}
