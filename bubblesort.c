/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:27:18 by pwildcat          #+#    #+#             */
/*   Updated: 2022/03/11 16:27:19 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

int	findindex(t_stack **s, int n)
{
	int		index;
	t_stack	*temp;

	if (counter(s) < n)
		n = counter(s);
	if ((*s) == NULL || n == 0)
		return (-1);
	if (n == 1)
		return ((*s)->index);
	index = (*s)->index;
	temp = (*s)->next;
	while (n > 1)
	{
		if (temp-> index < index)
			index = temp->index;
		n--;
		temp = temp->next;
	}
	return (index);
}

void	bubblesort(t_stack **a, t_stack **b, int an)
{
	int	bn;
	int	i;

	bn = 0;
	i = 0;
	while (!asort(a, an - bn))
	{
		while (!asort(a, an - bn))
		{
			if ((*a)->data > (*a)->next->data)
				sa(a);
			if (!asort(a, an - bn))
				bn += pb_return(a, b);
		}
		while (bn - i > 0)
		{
			pa(a, b);
			if ((*a)->data > (*a)->next->data)
				sa(a);
			bn--;
		}
		i++;
	}
	paforn(a, b, --i);
}

void	analiseforsmall(t_stack **a, t_stack **b, int n)
{
	if (n <= 1)
		return ;
	if (n == 2 && !sort(a))
		sa(a);
	if (n == 3)
		sort3elem(a, b);
	if (n == 4)
		sort4elem(a, b);
	if (n == 5)
		sort5elem(a, b);
	return ;
}
