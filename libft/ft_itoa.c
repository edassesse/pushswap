/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:31:20 by edassess          #+#    #+#             */
/*   Updated: 2021/05/06 17:43:34 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*ret;
	int			i;
	long int	tmp_n;

	tmp_n = n;
	i = n < 0;
	while ((n > 9) || (n < -9))
	{
		i++;
		n /= 10;
	}
	ret = malloc(sizeof(char) * i + 2);
	if (!ret)
		return (0);
	ret[0] = ((tmp_n >= 0) * 3) + 45;
	tmp_n = ((!(tmp_n < 0) * 2) - 1) * tmp_n;
	ret[i + 1] = '\0';
	while (tmp_n != 0)
	{
		ret[i--] = tmp_n % 10 + '0';
		tmp_n /= 10;
	}
	return (ret);
}
