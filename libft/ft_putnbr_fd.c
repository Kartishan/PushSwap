/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:56:15 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/09 15:56:17 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	t;
	long int	nb;
	char		c;
	long int	nan;

	nan = n;
	if (nan < 0)
	{
		nan = nan * -1;
		write(fd, "-", 1);
	}
	nb = 1;
	t = nan;
	while (t > 9)
	{	
		nb *= 10;
		t /= 10;
	}
	while (nb != 0)
	{
		t = nan / nb % 10;
		c = t + '0';
		write(fd, &c, 1);
		nb /= 10;
	}
}
/*int main()
{
    ft_putnbr_fd(0,1);
    return (0);
}*/