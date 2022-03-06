#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

t_stack	*input_memory(void)
{
	t_stack	*s;

	s = (t_stack *)malloc(sizeof(t_stack));
	if (s == NULL)
		return (s);
	s = NULL;
	return (s);
}
void	free_memory(t_stack **a)
{
	t_stack	*s;
	t_stack	*b;

	s = (*a);
	while (s != NULL)
	{
		b = s->next;
		free(s);
		s = b;
	}
}
