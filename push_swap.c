/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:02:00 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/25 16:02:02 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	rotate(t_stack **a)
{
	t_stack		*tmp;
	t_stack		*second;

	if (counter(a) < 2)
		return ;
	tmp = (*a);
	second = (*a)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (*a);
	(*a)->next = NULL;
	(*a) = second;
}

void	reversrotate(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (counter(a) < 2)
		return ;
	tmp = (*a);
	prev = NULL;
	while (tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	tmp->next = (*a);
	(*a) = tmp;
	prev->next = NULL;
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (check_arguments(argc, argv))
		return (write(1, "Error\n", 6));
	argc--;
	while (argc > 0)
	{
		push(&a, ft_atoi(argv[argc]));
		argc--;
	}
	init_index(&a);
	quicksort(&a, &b);
	free_memory(&a);
	free_memory(&b);
	exit(0);
}
