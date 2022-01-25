/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:36:21 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/25 16:36:23 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	hight(t_stack **a, t_stack **b)
{
	int	hight;

	hight = 0;
	while ((*a) != NULL)
	{
		hight++;
		(*a) = (*a)->next;
	}
	while ((*b) != NULL)
	{
		hight++;
		(*b) = (*b)->next;
	}
	return (hight);
}

void	insertion_sort(t_stack **a, t_stack **b, int hight)
{
	int		i;
	int		j;
	int		min;
	int		index;
	t_stack	*s;

	s = malloc(sizeof(t_stack));
	i = 1;
	j = 0;
	while (i < hight)
	{
		min = (*a)->data;
		s = (*a)->next;
		index = s->data;
		j = i -1;
		while (j >= 0 && min < index)
		{
			pb(&a, &b);
			j++;
		}
		(*a) = (*a)->next;
		i++;
	}
}
