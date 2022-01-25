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
void	insertion_sort(t_stack **a, t_stack **b, int hight);
#endif
