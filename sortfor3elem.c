/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfor3elem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:17:30 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/27 16:17:32 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	sort3elem(t_stack **a, t_stack **b)
{
	int		sec;
	int		t;

	sec = (*a)->next->data;
	t = (*a)->next->next->data;
	if (sec < (*a)->data && (*a)->data < t)
		sa(a);
	else if ((*a)->data < sec && sec > t && t > (*a)->data)
	{
		sa(a);
		ra(a);
	}
	else if ((*a)->data < sec && (*a)->data > t)
		rra(a);
	else if ((*a)->data > sec && sec > t)
	{
		ra(a);
		sa(a);
	}
	else if ((*a)->data < sec && sec > t && t < (*a)->data)
		sa(a);
	else if ((*a)->data > sec && (*a)->data > sec && sec < t)
		ra(a);
}
