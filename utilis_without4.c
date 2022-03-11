/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis_without4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:30:18 by pwildcat          #+#    #+#             */
/*   Updated: 2022/03/11 16:30:19 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ss_without(t_stack **a, t_stack **b)
{
	sa_without(a);
	sb_without(b);
}

void	rrr_without(t_stack **a, t_stack **b)
{
	rra_without(a);
	rrb_without(b);
}
