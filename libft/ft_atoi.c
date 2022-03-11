/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:39:50 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/16 14:06:18 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_space(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long int			c;
	unsigned long int	i;
	int					n;

	c = 0;
	n = 1;
	i = ft_space(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c *= 10;
		c += (str[i] - '0');
		if (c > 2147483647 && n == 1)
			return (-1);
		if (c > 2147483648 && n == -1)
			return (0);
		i++;
	}
	return ((int)c * n);
}
