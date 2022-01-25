/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:21:03 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/25 16:21:14 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	sa(t_stack **a)
{
	t_stack		*tmp;

	if (counter(*a) < 2)
		return ;
	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = (*a);
	(*a) = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack **a)
{
	t_stack		*tmp;

	if (counter(*a) < 2)
		return ;
	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = (*a);
	(*a) = tmp;
	write(1, "sb\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*s;
	t_stack	*c;

	s = malloc(sizeof(t_stack));
	s->data = (*b)->data;
	s->next = (*a);
	(*a) = s;
	c = malloc(sizeof(t_stack));
	(*b) = (*b)->next;
	c = (*b);
	(*b) = c;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*s;
	t_stack	*c;

	s = malloc(sizeof(t_stack));
	s->data = (*a)->data;
	s->next = (*b);
	(*b) = s;
	c = malloc(sizeof(t_stack));
	(*a) = (*a)->next;
	c = (*a);
	(*a) = c;
	write(1, "pb\n", 3);
}
