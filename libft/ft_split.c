/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwildcat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:37:33 by pwildcat          #+#    #+#             */
/*   Updated: 2021/10/19 13:37:34 by pwildcat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_colvo(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
	}
	return (j);
}

char	*ft_clean(char **p, int j)
{
	j--;
	if (j == 0)
		return ((void *) 0);
	while (p[j] >= 0)
		free (p[j]);
	return ((void *) 0);
}

char	**ft_mem(char **p, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < ft_colvo(s, c))
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			k++;
		}
		p[j] = (char *)malloc(sizeof(char) * (k + 1));
		if (p[j] == NULL)
			ft_clean(p, j);
		j++;
	}
	return (p);
}

char	**ft_zapis(char **p, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < ft_colvo(s, c))
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
		{
			p[j][k] = s[i];
			i++;
			k++;
		}
		p[j][k] = '\0';
		j++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		j;

	if (!s)
		return ((void *)0);
	j = ft_colvo(s, c);
	p = (char **)malloc(sizeof(char *) * (j + 1));
	if (p == NULL)
		return ((void *) 0);
	p = ft_mem(p, s, c);
	p = ft_zapis(p, s, c);
	p[j] = NULL;
	return (p);
}
