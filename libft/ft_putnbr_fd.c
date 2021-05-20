/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:45:36 by edassess          #+#    #+#             */
/*   Updated: 2021/03/10 11:14:05 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (nb > 9)
		ft_putnbr_fd((nb / 10), fd);
	ft_putchar_fd(nb % 10 + 48, fd);
}
