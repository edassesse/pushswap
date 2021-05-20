#include <stdio.h>
#include "libft/libft.h"

void	ft_swap(int tab[]);
void	ft_swap_ss(int tab1[], int tab2[]);
void	ft_push(int src[], int dst[]);
void	ft_rotate(int tab[]);
void	ft_rotate_rr(int tab1[], int tab2[]);
void	ft_rev_rotate(int tab[]);
void	ft_rev_rotate_rr(int tab1, int tab2);

void	init_tab(int tab1[], int tab2[], int size)
{
	while (--size >= 0)
	{
		tab1[size] = NULL;
		tab2[size] = NULL;
	}
}

int main(int ac, char **av)
{
	int	tab1[ac];
	int	tab2[ac];
	int	i = -1;
	int	j = 0;

	init_tab(tab1, tab2, ac);
	while (++i < ac - 1)
		tab1[i] = ft_atoi(av[i + 1]);
//	ft_swap(tab1);
//	ft_push(tab1, tab2);
//	ft_push(tab1, tab2);
//	ft_swap_ss(tab1, tab2);
//	ft_rotate_rr(tab1, tab2);
	ft_rev_rotate(tab1);
	while (tab1[j])
		printf("tab1==  |%d|\n", tab1[j++]);
	printf("\n\n\n");
	i = -1;
	while (tab2[++i])
			printf("tab2==  |%d|\n", tab2[i]);
}
