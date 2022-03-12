/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checfunction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:27:41 by pwildcat          #+#    #+#             */
/*   Updated: 2022/03/11 16:27:42 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	check_input(char *arg)
{
	if (!ft_isnum(arg))
		return (1);
	if ((ft_strlen(arg) > 10 && arg[0] != '-') || ft_strlen(arg) > 11)
		return (1);
	if (ft_strlen(arg) == 10 && ft_strncmp(arg, "2147483647", 10) > 0)
		return (1);
	if (ft_strlen(arg) == 11 && ft_strncmp(arg, "-2147483648", 11) > 0)
		return (1);
	return (0);
}

int	ft_isnum(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-')
	{
		i++;
		if (argv[i] == '\0')
			return (0);
	}
	while (ft_isdigit(argv[i]))
		i++;
	if (argv[i] == '\0')
		return (1);
	else
		return (0);
}

int	check_first(int argc, char **argv)
{
	int	i;
	int	m;
	int	p;

	i = 1;
	m = 0;
	p = 0;
	while (i < argc)
	{
		if (ft_strncmp(argv[i], "0", 1) == 0 && ft_strlen(argv[i]) == 1)
			p = 1;
		if (ft_strncmp(argv[i], "-0", 2) == 0 && ft_strlen(argv[i]) == 2)
			m = 1;
		i++;
	}
	if (m == 1 && p == 1)
		return (1);
	return (0);
}

int	sort_check(int argc, char **argv)
{
	if (check_arguments(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	check_arguments(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		if (check_input(argv[i]))
			return (1);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strncmp(argv[i], argv[j], 11) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (check_first(argc, argv));
}
