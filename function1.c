/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:20:25 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/25 16:20:57 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_space(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long int			c;
	unsigned long int	i;
	int					n;

	c = 0;
	n = 1;
	i = ft_space(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c *= 10;
		c += (str[i] - '0');
		if (c > 2147483647 && n == 1)
			return (-1);
		if (c > 2147483648 && n == -1)
			return (0);
		i++;
	}
	return ((int)c * n);
}

int	counter(t_stack *a)
{
	int	b;

	b = 0;
	while (a != NULL)
	{
		b++;
		a = a->next;
	}
	return (b);
}

void	push(t_stack **a, int b, int c)
{
	t_stack	*s;

	s = malloc(sizeof(t_stack));
	s->data = b;
	s->index = c;
	s->next = (*a);
	(*a) = s;
}

void	swap(t_stack **a)
{
	t_stack		*tmp;

	if (counter(*a) < 2)
		return ;
	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = (*a);
	(*a) = tmp;
}
