/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:51:05 by edassess          #+#    #+#             */
/*   Updated: 2021/03/23 11:16:43 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		size2;
	size_t		i;

	size2 = ft_strlen(src);
	if (dstsize == 0)
		return (size2);
	i = -1;
	while (++i < dstsize - 1 && src[i])
		dst[i] = src[i];
	dst[i] = 0;
	return (size2);
}
