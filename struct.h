/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:02:48 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/25 16:26:08 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	int				index;
}	t_stack;
int		g_global;
int		ft_space(const char *str);
int		ft_atoi(const char *str);
int		counter(t_stack *a);
void	push(t_stack **a, int b, int c);
void	swap(t_stack **a);
void	rotate(t_stack **a);
void	reversrotate(t_stack **a);
void	show(t_stack *a);
void	sa(t_stack **a);
void	sb(t_stack **a);
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
void	insertion_sort_without(t_stack **a, t_stack **b);
void	vibor_without(t_stack **a, t_stack **b);
void 	our_rr_without(t_stack **a, t_stack **b, int c);
void 	our_reverse_without(t_stack **a, t_stack **b, int c);
int		sorted_without(t_stack *s);
int		search_without(t_stack *a, t_stack *b);
void	modified_insertion_sort(t_stack **a, t_stack **b);
//int		prevsort(t_stack *a, t_stack **b, int sr);
void	analise(t_stack **a, t_stack **b, int c);
void	sort3elemwithparam(t_stack **a, t_stack **b);
#endif
