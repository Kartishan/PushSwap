/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_without2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:30:00 by pwildcat          #+#    #+#             */
/*   Updated: 2022/03/11 16:30:01 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ra_without(t_stack **a)
{
	t_stack		*tmp;
	t_stack		*second;

	if (counter(a) <= 1)
		return ;
	tmp = (*a);
	second = (*a)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*a);
	(*a)->next = NULL;
	(*a) = second;
}

void	rb_without(t_stack **a)
{
	t_stack		*tmp;
	t_stack		*second;

	if (counter(a) <= 1)
		return ;
	tmp = (*a);
	second = (*a)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*a);
	(*a)->next = NULL;
	(*a) = second;
}

void	rra_without(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*prev;

	tmp = (*a);
	prev = NULL;
	if (counter(a) <= 1)
		return ;
	while (tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	tmp->next = (*a);
	(*a) = tmp;
	prev->next = NULL;
}

void	rrb_without(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*prev;

	tmp = (*a);
	prev = NULL;
	if (counter(a) <= 1)
		return ;
	while (tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	tmp->next = (*a);
	(*a) = tmp;
	prev->next = NULL;
}

void	rr_without(t_stack **a, t_stack **b)
{
	ra_without(a);
	rb_without(b);
}
