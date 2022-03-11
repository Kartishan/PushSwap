/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:54:32 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/06 13:55:14 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < len && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
		len--;
	}
	return (0);
}
