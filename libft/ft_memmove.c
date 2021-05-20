/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:51:39 by edassess          #+#    #+#             */
/*   Updated: 2021/03/09 11:44:37 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;

	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	if (!src && !dst)
		return (NULL);
	if (dst > src)
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	else
		while (len--)
			*tmp_dst++ = *tmp_src++;
	return (dst);
}
