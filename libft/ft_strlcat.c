/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:40:22 by fle-biha          #+#    #+#             */
/*   Updated: 2021/03/15 10:19:34 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i] && n--)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n;
	size_t	dest_size;
	size_t	i;

	n = ft_strnlen(dest, size);
	dest_size = n;
	if (n == size)
		return (dest_size + ft_strlen(src));
	i = -1;
	while (src[++i] && n < size - 1)
		dest[n++] = src[i];
	dest[n] = 0;
	return (dest_size + ft_strlen(src));
}
