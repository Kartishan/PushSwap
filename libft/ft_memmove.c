/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:36:28 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 16:36:30 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *) dst;
	q = (unsigned char *) src;
	if (!dst && !src)
		return (dst);
	if (p > q)
	{
		while (len > 0)
		{
			len--;
			p[len] = q[len];
		}
	}
	else
	{
		while (len > 0)
		{
			*p++ = *q++;
			len--;
		}
	}
	return (dst);
}
