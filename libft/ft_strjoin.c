/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:55:42 by edassess          #+#    #+#             */
/*   Updated: 2021/05/06 17:46:20 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_ret;
	int		i;
	size_t	tot;
	int		j;

	j = 0;
	tot = ft_strlen(s1) + ft_strlen(s2) + 1;
	s_ret = (char *)malloc(sizeof(char) * tot);
	if (!s_ret)
		return (0);
	i = -1;
	while (s1[++i])
		s_ret[i] = s1[i];
	while (s2[j])
		s_ret[i++] = s2[j++];
	s_ret[i] = 0;
	return (s_ret);
}
