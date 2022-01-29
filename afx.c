#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	prevsort(t_stack *a, t_stack **b, int sr)
{
	int		i;
	t_stack *k;
	t_stack	*d;

	d = (*b);
	i = 0;
	insertion_sort_without(&a, &d);
    show(d);
	k = d;
	while (d != NULL)
	{
		i++;
		d = d->next;
	}
	i = i/2;
	while (i > 0)
	{
		k = k->next;
		i--;
	}
	sr = k->data;
}


void main(int argc, char **argv)
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

    prevsort(a, &b, c);
}