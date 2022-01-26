/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:36:21 by pwildcat          #+#    #+#             */
/*   Updated: 2022/01/25 16:36:23 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "struct.h"
// #include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	hight(t_stack **a)
// {
// 	int	hight;

// 	hight = 0;
// 	while ((*a) != NULL)
// 	{
// 		hight++;
// 		(*a) = (*a)->next;
// 	}
// 	//printf("chekaem %d ", hight);
// 	return (hight);
// }

// void	insertion_sort(t_stack **a, t_stack **b, int hight)
// {
// 	int		i;
// 	int		j;
// 	int		min;
// 	int		index;
// 	t_stack	*s;
// 	t_stack *h;

// 	s = malloc(sizeof(t_stack));
// 	h = malloc(sizeof(t_stack));
// 	i = 1;
// 	printf("ada%d \n", hight);
// 	j = 0;
// 	h = (*a);
// 	while (i < hight)
// 	{
// 		//printf("Вроде тут, а вроде не тут");
// 		min = (h)->data;
// 		s = (h)->next;
// 		index = s->data;
// 		j = i -1;
// 		//printf("sa%d  %d  %d\n", j,index, min);
// 		while (j >= 0 && min < index && h != NULL)
// 		{
// 			//printf("Вроде тут, а вроде не тут");
// 			pb(&h, (&b));
// 			j--;
// 			min = (h)->data;
// 			s = (h)->next;
// 			index = s->data;
// 		}
// 		ra(&h);
// 		i++;
// 	}
// 	(*a) = h;
// }
