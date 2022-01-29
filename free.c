#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	free(t_stack *a)
{
	while (a != NULL)
	{
		free(a->data);
		a = a->next;
	}
}