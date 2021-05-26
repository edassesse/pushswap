/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:12:55 by edassess          #+#    #+#             */
/*   Updated: 2021/03/23 11:16:02 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(char const *set, char const c)
{
	int		i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = ft_strlen(s1) - 1;
	while (ft_isset(set, s1[i]))
		i++;
	while (k && ft_isset(set, s1[k]))
		k--;
	if (k == 0)
		return (ft_strdup(""));
	return (ft_substr(s1, i, k + 1 - i));
}
