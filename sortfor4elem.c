/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfor4elem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:02:24 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/27 18:02:26 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	searchmin(t_stack **a)
{
	int		m;
	t_stack	*tmp;

	m = (*a)->data;
	tmp = (*a)->next;
	while (tmp != NULL)
	{
		if (m > tmp->data)
			m = tmp->data;
		tmp = tmp->next;
	}
	return (m);
}

void	sort4elem(t_stack **a, t_stack **b)
{
	int	i;

	i = direct_find_elem(*a, searchmin(a));
	while (i > 0)
	{
		ra(a);
		i--;
	}
	while (i < 0)
	{
		rra(a);
		i++;
	}
	pb(a, b);
	sort3elem(a, b);
	pa(a, b);
}
