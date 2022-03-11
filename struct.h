/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:02:48 by pwildcat          #+#    #+#             */
/*   Updated: 2022/02/25 16:54:14 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H

# define STRUCT_H
# include "./libft/libft.h"
# include "./gnl/get_next_line.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	int				index;
}	t_stack;

typedef struct s_additional
{
	int	ac;
	int	bc;
	int	pivot;
	int	i;
}	t_additional;

int		ft_space(const char *str);
int		ft_atoi(const char *str);
int		counter(t_stack **a);
void	push(t_stack **a, int b);
void	swap(t_stack **a);
void	rotate(t_stack **a);
void	reversrotate(t_stack **a);
void	show(t_stack *a);
void	sa(t_stack **a);
void	sb(t_stack **a);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **a);
void	rra(t_stack **a);
void	rrb(t_stack **a);
void	rrr(t_stack **a, t_stack **b);
void	insertion_sort(t_stack **a, t_stack **b);
int		direct_find_elem(t_stack *s, int elem);
void	sort3elem(t_stack **a, t_stack **b);
int		searchmin(t_stack **a);
void	sort4elem(t_stack **a, t_stack **b);
void	sort5elem(t_stack **a, t_stack **b);
void	pb_without(t_stack **a, t_stack **b);
void	pa_without(t_stack **a, t_stack **b);
void	sb_without(t_stack **a);
void	sa_without(t_stack **a);
void	ra_without(t_stack **a);
void	rb_without(t_stack **a);
void	rra_without(t_stack **a);
void	rrb_without(t_stack **a);
int		sort(t_stack **s);
void	insertion_sort_without(t_stack **a, t_stack **b);
void	vibor_without(t_stack **a, t_stack **b);
int		sorted_without(t_stack *s);
int		search_without(t_stack *a, t_stack *b);
void	modified_insertion_sort(t_stack **a, t_stack **b);
void	analise(t_stack **a, t_stack **b, int c);
void	sort3elemwithparam(t_stack **a, t_stack **b);
void	sort4elemwithparam(t_stack **a, t_stack **b);
void	free_memory(t_stack **s);
t_stack	*memory(void);
t_stack	*input_memory(void);
void	quick_a(t_stack **a, t_stack **b, int n, int flag);
int		acheck(t_stack **a, int pivot, int n);
void	checkb(t_stack **a, t_stack **b, int n);
int		bce(t_stack **b, int pivot, int n);
void	quick_b(t_stack **a, t_stack **b, int n, int flag);
void	quicksort(t_stack **a, t_stack **b);
void	paforn(t_stack **a, t_stack **b, int n);
void	pbforn(t_stack **a, t_stack **b, int n);
int		find_min(t_stack *s, int n);
void	bubblesort(t_stack **a, t_stack **b, int an);
int		pivot(t_stack **s, int n);
int		asort(t_stack **s, int n);
int		bsort(t_stack **s, int n);
void	analiseforsmall(t_stack **a, t_stack **b, int n);
void	init_index(t_stack **s);
void	ss_without(t_stack **a, t_stack **b);
void	rrr_without(t_stack **a, t_stack **b);
int		ra_return(t_stack **a);
int		rb_return(t_stack **a);
int		pa_return(t_stack **a, t_stack **b);
int		pb_return(t_stack **a, t_stack **b);
int		check_arguments(int argc, char **argv);
int		ft_isnum(char *argv);
void	rr(t_stack **a, t_stack **b);
void	rr_without(t_stack **a, t_stack **b);
#endif
