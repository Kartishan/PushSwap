/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:22:01 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/25 16:22:26 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ra(t_stack **a)
{
	t_stack		*tmp;
	t_stack		*second;

	if (counter(a) <= 1)
	{
		write(1, "ra\n", 3);
		return ;
	}
	tmp = (*a);
	second = (*a)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*a);
	(*a)->next = NULL;
	(*a) = second;
	write(1, "ra\n", 3);
}

void	rb(t_stack **a)
{
	t_stack		*tmp;
	t_stack		*second;

	if (counter(a) <= 1)
	{
		write(1, "rb\n", 3);
		return ;
	}
	tmp = (*a);
	second = (*a)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*a);
	(*a)->next = NULL;
	(*a) = second;
	write(1, "rb\n", 3);
}

void	rra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*prev;

	tmp = (*a);
	prev = NULL;
	if (counter(a) <= 1)
	{
		write(1, "rra\n", 4);
		return ;
	}
	while (tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	tmp->next = (*a);
	(*a) = tmp;
	prev->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*prev;

	tmp = (*a);
	prev = NULL;
	if (counter(a) <= 1)
	{
		write(1, "rrb\n", 4);
		return ;
	}
	while (tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	tmp->next = (*a);
	(*a) = tmp;
	prev->next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra_without(a);
	rrb_without(b);
	write(1, "rrr\n", 4);
}
