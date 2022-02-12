#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ace(t_stack **a, int pivot, int n)
{
	t_stack	*temp;

	if (counter((*a)) < n)
		n = counter((*a));
	if (n == 0 || n == 1)
		return (0);
	temp = (*a);
	while (n-- > 0)
	{
		if (temp->data <= pivot)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	QuickA(t_stack **a, t_stack **b, int n, int flag)
{
	int	steps;
	int	ac;
	int	bc;
	int	pivotu;
	int	i;

	i = 0;
	ac = n;
	bc = 0;
	pivotu = pivot(a, n);
	while (n-- > 0 && ace(a, pivotu, ac))
	{
		if ((*a)->data < pivotu)
		{
			ac--;
			bc++;
			pb(a, b);
		}
		else
		{
			i++;
			ra(a);
		}
	}
	while (i-- > 0 && flag != 0 && flag != 1)
		rra(a);
	if (ac <= 5 && !asort(a, ac))
		bubblesort(a, b, ac);
	else if (flag == 0 && !asort(a, ac))
		QuickA(a, b, bc, flag);
	else if (flag > 0 && !asort(a, ac))
		QuickA(a, b, ac, flag);
	QuickB(a, b, bc, flag);
}

void	checkb(t_stack **a, t_stack **b, int n)
{
	if (n == 2 && !bsort(b, n))
		sb(b);
	while (n-- > 0)
		pa(a, b);
}

int	bce(t_stack **b, int pivot, int n)
{
	t_stack	*temp;

	if (counter(*b) < n)
		n = counter(*b);
	if (n == 0 || n == 1)
		return (0);
	temp = (*b);
	while (n-- > 0)
	{
		if (temp->data >= pivot)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	QuickB(t_stack **a, t_stack **b, int n, int flag)
{
	int	steps;
	int	ac;
	int	bc;
	int	pivotu;
	int	i;

	i = 0;
	if (bsort(b, n) || n == 2)
		return (checkb(a, b, n));
	ac = 0;
	bc = n;
	pivotu = pivot(a, n);
	while (n-- > 0 && bce(b, pivotu, bc))
	{
		if ((*b)->data >= pivotu)
		{
			ac++;
			pa(a, b);
			bc--;
		}
		else
		{
			i++;
			rb(b);
		}
	}
	while (i-- > 0 && flag)
		rrb(b);
	if (ac <= 5)
		bubblesort(a, b, ac);
	else
		QuickA(a, b, ac, 2);
	QuickB(a, b, bc, flag);
}

void	QuickSort(t_stack **a, t_stack **b)
{
	if (sort(a))
		return ;
	if (counter((*a)) <= 5)
		bubblesort(a, b, counter((*a)));
	else
		QuickA(a, b, counter((*a)), 0);
}
