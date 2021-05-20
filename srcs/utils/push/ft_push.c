/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:53:32 by edassess          #+#    #+#             */
/*   Updated: 2021/05/20 11:34:02 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_push(int src[], int dst[])
{
	int	tmp;
	int	i;

	i = -1;
	if (!dst[0])
		dst[0] = src[0];
	else
	{
		tmp = src[0];
		while (dst[i++])
			;
		while (--i)
			dst[i] = dst[i - 1];
		dst[0] = tmp;
	}
	i = -1;
	while (src[++i + 1])
		src[i] = src[i + 1];
	src[i] = NULL;
}
