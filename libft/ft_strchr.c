/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:17:27 by edassess          #+#    #+#             */
/*   Updated: 2021/03/11 12:56:42 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp_s;

	tmp_s = (char *)s;
	if (!ft_isascii(c))
		return (tmp_s);
	if (!c)
		return (tmp_s + ft_strlen(s));
	while (*tmp_s)
	{
		if (*tmp_s == c)
			return (tmp_s);
		tmp_s++;
	}
	return (NULL);
}
