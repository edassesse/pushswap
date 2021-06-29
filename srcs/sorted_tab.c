/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:39:49 by edassess          #+#    #+#             */
/*   Updated: 2021/06/29 16:01:11 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	sort_tab(int *ref, int *dst, int size)
{
	int				big;
	long long int	tmp;
	int				t_size;
	int				i;

	tmp = 2147483648;
	t_size = size;
	i = 0;
	big = ref[i];
	while (size--)
	{
		while (++i < t_size)
		{
			if (ref[i] > big && (long long int)ref[i] < tmp)
				big = ref[i];
		}
		dst[size] = big;
		tmp = (long long int)big;
		i = 0;
		big = ref[i];
	}
}
