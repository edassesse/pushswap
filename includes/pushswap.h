/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:38:06 by edassess          #+#    #+#             */
/*   Updated: 2021/07/01 16:32:04 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"
# include <stdio.h>

typedef struct s_pile
{
	int	*p_a;
	int	*p_b;
	int	*p_ref;
	int	a_size;
	int	b_size;
	int	ref_size;
}				t_pile;

void	ft_swap(int tab[], char *s);
void	ft_push(char *s, t_pile *data);
void	ft_rotate(int tab[], char *s, int size);
void	ft_rotate_rr(int tab1[], int tab2[]);
void	ft_rev_rotate(int tab[], char *s, int size);
int		ft_fill_tab(int tab[], int ac, char **av);
void	sort_tab(t_pile *tab);
void	ft_parsing(char **s, t_pile *data);
int		tab_size(char **s);
void	ft_sort(t_pile *data);
int		is_sorted(int *tab, int size);
void	get_dir_p_a(int *tab, int ref, int size);
void	back_to_p_a(t_pile *tab);
int		get_case(t_pile *tab);
void	ft_error(char *s, t_pile *tab);

#endif
