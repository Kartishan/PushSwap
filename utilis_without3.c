/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_without3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:30:06 by pwildcat          #+#    #+#             */
/*   Updated: 2022/03/11 16:30:07 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	paforn(t_stack **a, t_stack **b, int n)
{
	while (n-- > 0)
		pa(a, b);
}

void	pbforn(t_stack **a, t_stack **b, int n)
{
	while (n-- > 0)
		pb(a, b);
}

int	sort(t_stack **s)
{
	t_stack	*temp;

	if (counter((s)) == 0 || counter((s)) == 1)
		return (1);
	temp = (*s);
	while (temp->next != NULL && temp->data < temp->next->data)
		temp = temp->next;
	if (temp->next == NULL)
		return (1);
	else
		return (0);
}
