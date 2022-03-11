/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:27:18 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 17:27:19 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && dstsize > 1)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
