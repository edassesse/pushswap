/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:38:06 by edassess          #+#    #+#             */
/*   Updated: 2021/06/29 17:24:14 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"
# include <stdio.h>

void	ft_swap(int tab[]);
void	ft_swap_ss(int tab1[], int tab2[]);
void	ft_push(int src[], int dst[], char *s);
void	ft_rotate(int tab[], char *s);
void	ft_rotate_rr(int tab1[], int tab2[]);
void	ft_rev_rotate(int tab[], char *s);
void	ft_rev_rotate_rr(int tab1[], int tab2[]);
int		ft_fill_tab(int tab[], int ac, char **av);
void	sort_tab(int *ref, int *dst, int size);
int		**ft_parsing(char **s);
int		tab_size(char **s);
void	ft_sort(int **tab, int size);


#endif
