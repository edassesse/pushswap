/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:38:06 by edassess          #+#    #+#             */
/*   Updated: 2021/06/30 15:17:09 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"
# include <stdio.h>

typedef struct	s_pile
{
	int	*p_a;
	int	*p_b;
	int	*p_ref;
	int	a_size;
	int	b_size;
	int	ref_size;
}				t_pile;

void	ft_swap(int tab[]);
void	ft_swap_ss(int tab1[], int tab2[]);
void	ft_push(char *s, t_pile *data);
void	ft_rotate(int tab[], char *s, int size);
void	ft_rotate_rr(int tab1[], int tab2[]);
void	ft_rev_rotate(int tab[], char *s, int size);
int		ft_fill_tab(int tab[], int ac, char **av);
void	sort_tab(t_pile *tab);
void	ft_parsing(char **s, t_pile *data);
int		tab_size(char **s);
void	ft_sort(t_pile *data);


#endif
