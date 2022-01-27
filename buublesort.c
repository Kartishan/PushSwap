// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   buublesort.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/01/27 17:14:51 by pwildcat          #+#    #+#             */
// /*   Updated: 2022/01/27 17:14:52 by pwildcat         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "struct.h"
// #include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	small_stack_sort_a(t_stack *a, t_stack *b, int n)
// {
// 	int	steps;
// 	int	m;

// 	m = 1;
// 	steps = 0;
// 	if (count(a) < n)
// 		n = count(a);
// 	if (n == 0)
// 		return (0);
// 	while (!a_sorted_n(a, n))
// 	{
// 		while (m < n && !a_sorted_n(a, n - m + 1))
// 		{
// 			if (a->top->content > a->top->next->content)
// 			{
// 				sa(a);
// 				steps++;
// 			}
// 			if (!a_sorted_n(a, n - m + 1))
// 			{
// 				pb(a, b);
// 				steps++;
// 				m++;
// 			}
// 		}
// 		while (m > 1)
// 		{
// 			pa(a, b);
// 			steps++;
// 			m--;
// 		}
// 	}
// 	while (n-- != 0)
// 		steps += pb(a, b);
// 	return (steps);
// }

// int	small_stack_sort_b(t_stack *a, t_stack *b, int n)
// {
// 	int	steps;
// 	int	m;

// 	m = 1;
// 	steps = 0;
// 	if (count(b) < n)
// 		n = count(b);
// 	if (n == 0)
// 		return (0);
// 	while (!b_sorted_n(b, n))
// 	{
// 		while (m < n && !b_sorted_n(b, n - m + 1))
// 		{
// 			if (b->top->content < b->top->next->content)
// 			{
// 				sb(b);
// 				steps++;
// 			}
// 			if (!b_sorted_n(b, n - m + 1))
// 			{
// 				pa(a, b);
// 				steps++;
// 				m++;
// 			}
// 		}
// 		while (m > 1)
// 		{
// 			pb(a, b);
// 			steps++;
// 			m--;
// 		}
// 	}
// 	return (steps);
// }
