#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	search_without(t_stack *a, t_stack *b)
{
	t_stack	*s;
	int		tmp;

	s = b;
	tmp = a->data;
	while (s != NULL)
	{
		if (tmp > s->data)
			return (s->data);
		s = s->next;
	}
	return (b->data);
}

int	sorted_without(t_stack *s)
{
	t_stack	*temp;

	if (counter(s) == 0 || counter(s) == 1)
		return (1);
	temp = s;
	while (temp->next != NULL && temp->data > temp->next->data)
		temp = temp->next;
	if (temp->next == NULL)
		return (1);
	else
		return (0);
}

void our_reverse_without(t_stack **a, t_stack **b, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		rb_without(&(*b));
		i++;
	}
	pb_without(&(*a), &(*b));
	i = 0;
	while (i < c)
	{
		rrb_without(&(*b));
		i++;
	}
}

void our_rr_without(t_stack **a, t_stack **b, int c)
{
	int	i;

	i = 0;
	while (i > c)
	{
		rrb_without(&(*b));
		i--;
	}
	pb_without(&(*a), &(*b));
	i = 0;
	while (i > c - 1)
	{
		rb_without(&(*b));
		i--;
	}
}

void	vibor_without(t_stack **a, t_stack **b)
{
	int i;

	i = direct_find_elem(*b, search_without(*a, *b));
	if ((*a)->data < (*b)->data && i == 0)
	{
		pb_without(a, b);
		rb_without(b);
	}
	else if (i > 0)
		our_reverse_without(a, b, i);
	else if (i < 0)
		our_rr_without(a, b, i);
	else
		pb_without(a, b);

}
void	insertion_sort_without(t_stack **a, t_stack **b)
{
	int	j;
	int	tmp;

	pb_without(a, b);
	pb_without(a, b);
	if (!sorted_without(*b))
		sb_without(b);
	while (*a != NULL)
	{
		vibor_without(&(*a), &(*b));
	}
	
}
