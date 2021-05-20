/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:23:25 by fle-biha          #+#    #+#             */
/*   Updated: 2021/03/23 11:16:23 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		i2;
	size_t		mem_len;

	mem_len = len;
	if (!(*needle))
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = -1;
	while (haystack[++i] && len > 0)
	{
		i2 = 0;
		while (haystack[i + i2] == needle[i2] && i + i2 < mem_len)
			if (!needle[++i2])
				return ((char *)haystack + i);
		len--;
	}
	return (0);
}
