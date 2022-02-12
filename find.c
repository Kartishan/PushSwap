#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

int	direct_find_elem(t_stack *s, int elem)
{
	int		x;
	int		y;
	t_stack	*temp;

	if (s == NULL || counter(s) == 0)
		return (0);
	x = 0;
	y = 0;
	temp = s;
	while (temp != NULL && temp->data != elem)
	{
		x++;
		temp = temp->next;
	}
	while (temp != NULL)
	{
		y--;
		temp = temp->next;
	}
	if (x < -y)
		return (x);
	return (y);
}