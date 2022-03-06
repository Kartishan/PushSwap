#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	init_index(t_stack **s)
{
	t_stack	*min;
	t_stack	*tmp;
	int		i;

	i = 0;
	while (i <= counter(s))
	{
		min = NULL;
		tmp = (*s);
		while (tmp != NULL && tmp->index != -1)
			tmp = tmp->next;
		if (tmp != NULL)
			min = tmp;
		while (tmp != NULL)
		{
			if (tmp->data < min->data && tmp->index == -1)
				min = tmp;
			tmp = tmp->next;
		}
		if (min != NULL)
			min->index = i;
		i++;
	}
}
