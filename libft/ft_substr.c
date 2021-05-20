/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:42:10 by edassess          #+#    #+#             */
/*   Updated: 2021/05/06 17:38:20 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_ret;
	size_t	i;

	i = 0;
	if (len == 0 || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	s_ret = (char *)malloc(sizeof(char) * len + 1 );
	if (!s_ret)
		return (0);
	while (i < len && s[start])
		s_ret[i++] = s[start++];
	s_ret[i] = '\0';
	return (s_ret);
}
