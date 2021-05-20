/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <ldenis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:37:58 by ldenis            #+#    #+#             */
/*   Updated: 2021/05/06 17:45:46 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen(s1);
	j = -1;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	if (!s1)
		*str = '\0';
	else
		while (++j < i)
			str[j] = s1[j];
	str[j] = '\0';
	if (str == NULL)
		return (0);
	return (str);
}
