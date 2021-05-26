/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:38:06 by edassess          #+#    #+#             */
/*   Updated: 2021/05/26 11:51:12 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"
# include <stdio.h>

void	ft_swap(int tab[]);
void	ft_swap_ss(int tab1[], int tab2[]);
void	ft_push(int src[], int dst[]);
void	ft_rotate(int tab[]);
void	ft_rotate_rr(int tab1[], int tab2[]);
void	ft_rev_rotate(int tab[]);
void	ft_rev_rotate_rr(int tab1, int tab2);
void	pushswap(int ac, char **av);
int		ft_fill_tab(int ab[], int ac, char **av);

#endif
