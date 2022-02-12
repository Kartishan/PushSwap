// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   sort4withparam.c                                   :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/01/29 16:03:20 by pwildcat          #+#    #+#             */
// /*   Updated: 2022/01/29 16:03:22 by pwildcat         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "struct.h"
// #include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	searchmin(t_stack **a, int n)
// {
// 	int		m;
// 	t_stack	*tmp;
// 	int		i;
// 	int		j;

// 	m = (*a)->data;
// 	tmp = (*a)->next;
// 	i = 1;
// 	j = 0;
// 	while (i < n)
// 	{
// 		if (m > tmp->data)
// 		{
// 			m = tmp->data;
// 			j = i + 1;
// 		}
// 		tmp = tmp->next;
// 		i++;
// 	}
// 	return (j);
// }

// void	sort4elemwithparam(t_stack **a, t_stack **b)
// {
// 	int		i;

// 	i = searchmin(a, 4);
// 	printf("aga: %d\n", i);
// 	if (i == 4)
// 	{
// 		ra(a);
// 		ra(a);
// 		sa(a);
// 		pb(a, b);
// 		rra(a);
// 		rra(a);
// 	}
// 	else if (i == 3)
// 	{
// 		ra(a);
// 		sa(a);
// 		pb(a, b);
// 		rra(a);
// 	}
// 	else if (i == 2)
// 	{
// 		sa(a);
// 		pb(a, b);
// 	}
// 	else
// 		pb(a, b);
// 	show(*a);
// 	sort3elemwithparam(a,b);
// 	pa(a,b);
// }

// // void	sort4elemwithparam(t_stack **a, t_stack **b)
// // {
// // 	int	second;
// // 	int	third;
// // 	int	fourth;

// // 	second = (*a)->next->data;
// // 	third = (*a)->next->next->data;
// // 	fourth = (*a)->next->next->next->data;
// // 	if ((*a)->data > second && second > third && third > fourth)
// // 	{
// // 		ra(a);
// // 		ra(a);
// // 		pb(a, b);
// // 		pb(a, b);
// // 		rra(a);
// // 		rra(a);
// // 		ss(a, b);
// // 		pa(a, b);
// // 		pa(a, b);
// // 		//3 2 1 0
// // 	}
// // 	else if ((*a)->data > second && second > third && third < fourth)
// // 	{
// // 		ra(a);
// // 		ra(a);
// // 		pb(a, b);
// // 		pb(a, b);
// // 		rra(a);
// // 		rra(a);
// // 		sa(a);
// // 		pa(a);
// // 		pa(a);
// // 		// 3 2 0 1
