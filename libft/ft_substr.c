/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:28:27 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/07 18:28:28 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_countmemory(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;

	j = 0;
	i = 0;
	if (ft_strlen(s) >= start)
	{
		while (i < start)
			i++;
		while (j < len && s[i] != '\0')
		{
			j++;
			i++;
		}
	}
	return (j);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*p;

	j = 0;
	if (!s)
		return (NULL);
	p = malloc(sizeof(char) * (ft_countmemory(s, start, len) + 1));
	if (p == NULL)
		return ((void *)0);
	i = 0;
	if (ft_strlen(s) >= start)
	{
		while (i < start)
			i++;
		while (j < len && s[i] != '\0')
		{
			p[j] = s[i];
			j++;
			i++;
		}
	}
	p[j] = '\0';
	return (p);
}
