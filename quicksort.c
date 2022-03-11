/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:29:39 by pwildcat          #+#    #+#             */
/*   Updated: 2022/03/11 16:29:40 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	pivot(t_stack **s, int n)
{
	int		max_index;
	int		min_index;
	t_stack	*temp;
	int		i;

	if (n < 2)
		return ((*s)->data);
	i = 0;
	temp = (*s);
	max_index = -1;
	min_index = INT_MAX;
	while (i < n)
	{
		i++;
		if (temp->index > max_index)
			max_index = temp->index;
		if (temp->index < min_index)
			min_index = temp->index;
		temp = temp->next;
	}
	temp = (*s);
	i = 0;
	while (i < n && temp->index != (min_index + max_index) / 2)
		temp = temp->next;
	return (temp->data);
}

int	asort(t_stack **s, int n)
{
	t_stack	*temp;
	int		i;

	i = 0;
	if (n == 0 || n == 1)
		return (1);
	temp = (*s);
	while (temp->next != NULL && temp->data <= temp->next->data
		&& n - 2 >= i)
	{
		i++;
		temp = temp->next;
	}
	if (n - 1 == i)
		return (1);
	else
		return (0);
}

int	bsort(t_stack **s, int n)
{
	t_stack	*temp;
	int		i;

	i = 0;
	if (n == 0 || n == 1)
		return (1);
	temp = (*s);
	while (temp->next != NULL && temp->data >= temp->next->data
		&& n - 2 >= i)
	{
		i++;
		temp = temp->next;
	}
	if (n - 1 == i)
		return (1);
	else
		return (0);
}

void	checkb(t_stack **a, t_stack **b, int n)
{
	if (n == 2 && !bsort(b, n))
		sb(b);
	while (n-- > 0)
		pa(a, b);
}
