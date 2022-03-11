/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:05:59 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 13:06:04 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_count(long int nan)
{
	int	i;

	i = 0;
	while (nan != 0)
	{
		nan /= 10;
		i++;
	}
	return (i);
}

char	*ft_putnbr(long int n, char *p, int negative)
{
	long int	k;
	long int	power;
	long int	i;

	i = 0;
	if (negative == -1)
	{
		p[i] = '-';
		i++;
	}
	power = n;
	k = 1;
	while (power > 9)
	{
		k = k * 10;
		power = power / 10;
	}
	while (k != 0)
	{
		p[i] = (n / k % 10) + '0';
		k /= 10;
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	long int			i;
	char				*p;
	long int			nan;
	long int			negative;

	i = 0;
	nan = n;
	negative = 0;
	i = ft_count(nan);
	if (nan < 0)
	{
		nan = nan * -1;
		negative = -1;
		i++;
	}
	if (nan == 0)
		p = malloc(sizeof(char) + 1);
	else
		p = malloc(i + 1);
	if (p == NULL)
		return ((void *)0);
	p = ft_putnbr(nan, p, negative);
	return (p);
}
