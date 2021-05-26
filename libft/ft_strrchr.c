/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:49:09 by ldenis            #+#    #+#             */
/*   Updated: 2021/03/11 12:59:02 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (!ft_isascii(c))
		return ((char *)s);
	if (!c)
		return ((char *)s + i);
	while (i--)
		if (s[i] == c)
			return ((char *)s + i);
	return (NULL);
}
