/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:47:27 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/05 16:47:28 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *)s1;
	q = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 1 && (*p != '\0') && (*q != '\0') && *p == *q)
	{
		p++;
		q++;
		n--;
	}
	return (*p - *q);
}
