/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myquick.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:29:13 by pwildcat          #+#    #+#             */
/*   Updated: 2022/03/11 16:29:15 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	quick_a(t_stack **a, t_stack **b, int n, int flag)
{
	t_additional	variables;

	variables.i = 0;
	variables.ac = n;
	variables.bc = 0;
	variables.pivot = pivot(a, n);
	while (n-- > 0 && acheck(a, variables.pivot, variables.ac))
	{
		if ((*a)->data <= variables.pivot)
		{
			variables.ac--;
			variables.bc += pb_return(a, b);
		}
		else
			variables.i += ra_return(a);
	}
	while (variables.i-- > 0 && flag != 0 && flag != 1)
		rra(a);
	if (variables.ac <= 5 && !asort(a, variables.ac))
		bubblesort(a, b, variables.ac);
	else if (flag == 0 && !asort(a, variables.ac))
		quick_a(a, b, variables.ac, 1);
	else if (flag > 0 && !asort(a, variables.ac))
		quick_a(a, b, variables.ac, flag);
	quick_b(a, b, variables.bc, flag);
}

int	acheck(t_stack **a, int pivotu, int n)
{
	t_stack	*temp;

	if (counter(a) < n)
		n = counter(a);
	if (n == 0 || n == 1)
		return (0);
	temp = (*a);
	while (n-- > 0)
	{
		if (temp->data <= pivotu)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	bce(t_stack **b, int pivotu, int n)
{
	t_stack	*temp;

	if (counter(b) < n)
		n = counter(b);
	if (n == 0 || n == 1)
		return (0);
	temp = (*b);
	while (n-- > 0)
	{
		if (temp->data >= pivotu)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	quick_b(t_stack **a, t_stack **b, int n, int flag)
{
	t_additional	variables;

	variables.i = 0;
	if (bsort(b, n) || n < 3)
		return (checkb(a, b, n));
	variables.ac = 0;
	variables.bc = n;
	variables.pivot = pivot(b, n);
	while (n-- > 0 && bce(b, variables.pivot, variables.bc))
	{
		if ((*b)->data >= variables.pivot)
		{
			variables.ac += pa_return(a, b);
			variables.bc--;
		}
		else
		variables.i += rb_return(b);
	}
	while (variables.i-- > 0 && flag)
		rrb(b);
	if (variables.ac <= 5)
		bubblesort(a, b, variables.ac);
	else
		quick_a(a, b, variables.ac, 2);
	quick_b(a, b, variables.bc, flag);
}

void	quicksort(t_stack **a, t_stack **b)
{
	if (sort(a))
		return ;
	if (counter(a) <= 5)
		analiseforsmall(a, b, counter(a));
	else
		quick_a(a, b, counter(a), 0);
}
