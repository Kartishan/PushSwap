/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:40:23 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/06 11:40:25 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *)s1;
	q = (unsigned char *)s2;
	while (n > 0)
	{
		if (*p != *q)
		{
			return (*p - *q);
		}
		p++;
		q++;
		n--;
	}
	return (0);
}
