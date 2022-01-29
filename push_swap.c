/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:21:35 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/25 16:22:51 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

	if (counter(*a) < 2)
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

	if (counter(*a) < 2)
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

void	show(t_stack *a)
{
	while (a != NULL)
	{
		printf("%d\n", a->data);
		a = a->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		c;

	a = NULL;
	b = NULL;
	argc--;
	c = 0;
	g_global = 0;
	while (argc > 0)
	{
		push(&a, ft_atoi(argv[argc]), c);
		c++;
		argc--;
	}
	//printf("\n");
	//insertion_sort(&a, &b);
	sort3elemwithparam(&a,&b);
	//modified_insertion_sort;
	//prevsort(a,&b,c);
	show(a);
	//show(b);
	printf("nASAHA GLOBAL %d\n", g_global);
	return (0);
}
	//c = hight(&a);
	//printf("chekaem %d ", c);
	// while (i > 0)
	// {
	// 	push(&b, i, c);
	// 	c++;
	// 	i--;
	// }
	//swap(&a);
	//insertion_sort(&a, &b, c);
	//rrr(&a,&b);
	//show(a);
	//ra(&a);
