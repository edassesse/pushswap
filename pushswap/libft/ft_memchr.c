/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:46:11 by fle-biha          #+#    #+#             */
/*   Updated: 2021/03/11 12:12:40 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp_s;

	tmp_s = (char *)s;
	while (tmp_s && n--)
	{
		if (*tmp_s++ == (const char)c)
			return (tmp_s - 1);
	}
	return (NULL);
}
