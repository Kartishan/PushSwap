#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	sa_without(t_stack **a)
{
	t_stack		*tmp;

	if (counter(a) < 2)
		return ;
	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = (*a);
	(*a) = tmp;
}

void	sb_without(t_stack **a)
{
	t_stack		*tmp;

	if (counter(a) < 2)
		return ;
	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = (*a);
	(*a) = tmp;
}

void	pa_without(t_stack **a, t_stack **b)
{
	t_stack	*s;
	t_stack	*c;

	s = malloc(sizeof(t_stack));
	s->data = (*b)->data;
	s->next = (*a);
	(*a) = s;
	c = malloc(sizeof(t_stack));
	(*b) = (*b)->next;
	c = (*b);
	(*b) = c;
}

void	pb_without(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
}
