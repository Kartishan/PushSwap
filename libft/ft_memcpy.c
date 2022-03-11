/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:41:14 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/05 14:42:02 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;
	char	*q;

	p = (char *) dst;
	q = (char *) src;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*p++ = *q++;
		n--;
	}
	return (dst);
}
