#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ra_without(t_stack **a)
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

void	rb_without(t_stack **a)
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

void	rra_without(t_stack **a)
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

void	rrb_without(t_stack **a)
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