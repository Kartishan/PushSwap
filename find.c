#include "struct.h"
#include <unistd.h>
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
//    обычные столько же
// 	int	i;
// 	int tmp;

// 	tmp = search(a, b,)
// 	i = direct_find_elem((*b), a->data);
// 	printf(" a tut takor : %d\n", i);
// 	if (i > 0)
// 		our_reverse(&(*a), &(*b), i);
// 	else if (i < 0)
// 		our_rr(&(*a), &(*b), i);
// 	else
// 		pb(&(*a), &(*b));
// }