#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	sort3elemwithparam(t_stack **a, t_stack **b)
{
	int		sec;
	int		t;

	sec = (*a)->next->data;
	t = (*a)->next->next->data;
	if (sec < (*a)->data && (*a)->data < t)
		sa(a); // 2 1 3 5
	else if ((*a)->data < sec && sec > t && t > (*a)->data)
	{
		ra(a);
		sa(a);
		rra(a);
		// 1 3 2 5
	}
	else if ((*a)->data < sec && (*a)->data > t)
	{
		ra(a);
		sa(a);
		rra(a);
		sa(a);
		// 2 3 1 5
	}
	else if ((*a)->data > sec && sec > t)
	{
		sa(a);
		ra(a);
		sa(a);
		rra(a);
		sa(a);
		// pb(a, b);
		// ra(a);
		// pb(a, b);
		// pb(a, b);
		// rrb(b);
		// //3 2 1 5
	}
	else if ((*a)->data > sec && (*a)->data > sec && sec < t)
	{
		sa(a);
		ra(a);
		sa(a);
		rra(a);
		// 3 1 2 5
	}
}
