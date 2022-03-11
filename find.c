/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:28:10 by pwildcat          #+#    #+#             */
/*   Updated: 2022/03/11 16:28:11 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

int	direct_find_elem(t_stack *s, int elem)
{
	int		x;
	int		y;
	t_stack	*temp;

	if (s == NULL || counter(&s) <= 1)
		return (0);
	x = 0;
	y = 0;
	temp = s;
	while (temp != NULL && temp->data != elem)
	{
		x++;
		temp = temp->next;
	}
	while (temp != NULL)
	{
		y--;
		temp = temp->next;
	}
	if (x < -y)
		return (x);
	return (y);
}
