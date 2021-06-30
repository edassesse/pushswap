/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:00:29 by edassess          #+#    #+#             */
/*   Updated: 2020/11/29 17:38:10 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_c;
	t_list	*tmp_n;

	tmp_n = *lst;
	while (tmp_n)
	{
		tmp_c = tmp_n;
		tmp_n = tmp_c->next;
		ft_lstdelone(tmp_c, del);
	}
	*lst = NULL;
}
