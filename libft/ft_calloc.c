/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:58:58 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/07 18:58:59 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	p = malloc(count * size);
	if (p == NULL)
		return ((void *)0);
	ft_bzero(p, count * size);
	return ((void *)p);
}
