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

int	prevsort(t_stack *a, t_stack **b, int sr)
{
	int		i;
	t_stack *k;
	t_stack	*d;

	d = (*b);
	i = 0;
	show(a);
	insertion_sort_without(&a, &d);
	k = d;
	while (d != NULL)
	{
		i++;
		d = d->next;
	}
	i = i/2;
	while (i > 0)
	{
		k = k->next;
		i--;
	}
	sr = k->data;
	return (sr);
}

void	analise(t_stack **a, t_stack **b, int c)
{
	int		sr;
	t_stack *s;

	s = *a;
	sr = prevsort(s, b, sr);
	show(*a);
	// while (c > 0)
	// {
	// 	if ((*a)->data < sr)
	// 		pb(a, b);
	// 	else
	// 		ra(a);
	// 	(*a) = (*a)->next;
	// 	c--;
	// }
	//show(*a);
}

void	modified_insertion_sort(t_stack **a, t_stack **b)
{
	t_stack	*s;
	int		i;

	s = (*a);
	while (s != NULL)
	{
		s = s->next;
		i++;
	}
	analise(a, b, i);
}