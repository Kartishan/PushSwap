#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

int	findindex(t_stack **s, int n)
{
	int		index;
	t_stack	*temp;

	if (counter((*s)) < n)
		n = counter((*s));
	if ((*s) == NULL || n == 0)
		return (-1);
	if (n == 1)
		return ((*s)->index);
	index = (*s)->index;
	temp = (*s);
	while (n > 1)
	{
		if (temp-> index < index)
			index = temp->index;
		n--;
		temp = temp->next;
	}
	return (index);
}

void	bubblesort(t_stack **a, t_stack **b, int an)
{
	int	bn;
	int	i;

	bn = 0;
	i = 0;
	while (!asort(a, an - bn))
	{
		if ((*a)->data > (*a)->next->data)
			sa(a);
		if (!asort(a, an - bn))
		{
			bn++;
			pb(a, b);
		}
		while (bn - i > 0)
		{
			pa(a, b);
			if ((*a)->data > (*a)->next->data)
				sa(a);
			bn--;
		}
		i++;
	}
	paforn(a, b, --i);
}
