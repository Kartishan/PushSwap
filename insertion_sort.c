/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:57:44 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/26 17:57:47 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	search(t_stack *a, t_stack *b)
{
	t_stack	*s;
	int		tmp;

	s = b;
	tmp = a->data;
	while (s != NULL)
	{
		if (tmp > s->data)
			return (s->data);
		s = s->next;
	}
	return (b->data);
}

int	sorted(t_stack *s)
{
	t_stack	*temp;

	if (counter(s) == 0 || counter(s) == 1)
		return (1);
	temp = s;
	while (temp->next != NULL && temp->data > temp->next->data)
		temp = temp->next;
	if (temp->next == NULL)
		return (1);
	else
		return (0);
}

void our_reverse(t_stack **a, t_stack **b, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		rb(&(*b));
		i++;
	}
	pb(&(*a), &(*b));
	i = 0;
	while (i < c)
	{
		rrb(&(*b));
		i++;
	}
}

void our_rr(t_stack **a, t_stack **b, int c)
{
	int	i;

	i = 0;
	while (i > c)
	{
		rrb(&(*b));
		i--;
	}
	pb(&(*a), &(*b));
	i = 0;
	while (i > c - 1)
	{
		rb(&(*b));
		i--;
	}
}

void	vibor(t_stack **a, t_stack **b)
{
	int i;

	i = direct_find_elem(*b, search(*a, *b));
	if ((*a)->data < (*b)->data && i == 0)
	{
		pb(a, b);
		rb(b);
	}
	else if (i > 0)
		our_reverse(a, b, i);
	else if (i < 0)
		our_rr(a, b, i);
	else
		pb(a, b);

}
void	insertion_sort(t_stack **a, t_stack **b)
{
	int	j;
	int	tmp;

	pb(a, b);
	pb(a, b);
	if (!sorted(*b))
		sb(b);
	while (*a != NULL)
	{

		//printf("tut 1tmp: %d\n", tmp);
		vibor(&(*a), &(*b));
	}
	
}
