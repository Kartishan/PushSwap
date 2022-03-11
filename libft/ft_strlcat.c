/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:47:07 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 17:27:32 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			j;
	size_t			s;
	unsigned int	c;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	s = i;
	c = i;
	while (src[j] != '\0')
		j++;
	s += j;
	j = 0;
	if (i == dstsize)
		return (s);
	while (dstsize - 1 > i && src[j] != '\0' && dstsize != 0)
		dst[i++] = src[j++];
	if (dstsize != 0 && c <= dstsize)
		dst[i] = '\0';
	return (s);
}
