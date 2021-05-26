/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:56:39 by edassess          #+#    #+#             */
/*   Updated: 2020/11/28 18:12:13 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*b;

	b = NULL;
	n = b;
	while (lst)
	{
		b = ft_lstnew((*f)(lst->content));
		if (!b)
		{
			ft_lstclear(&n, (*del));
			return (NULL);
		}
		ft_lstadd_back(&n, b);
		lst = lst->next;
	}
	return (n);
}
