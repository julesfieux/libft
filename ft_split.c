/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:23:48 by jfieux            #+#    #+#             */
/*   Updated: 2021/01/05 11:07:37 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_init(const char *s, char c, char **res, int i)
{
	int j;
	int k;

	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i])
			{
				res[k][j] = s[i];
				j++;
				i++;
			}
			k++;
		}
		else
			i++;
	}
	res[k] = NULL;
	return (res);
}

static int	ft_malword(int c, int i, const char *s, char **res)
{
	int j;
	int k;

	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i])
			{
				j++;
				i++;
			}
			if (!(res[k] = malloc(sizeof(char) * (j + 1))))
				return (0);
			k++;
		}
		else
			i++;
	}
	if (!(res[k] = malloc(sizeof(char))))
		return (0);
	return (1);
}

char		**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			j++;
		}
		else
			i++;
	}
	if (!(res = malloc(sizeof(char *) * (j + 1))))
		return (0);
	if (!(ft_malword(c, 0, s, res)))
		return (0);
	res = ft_init(s, c, res, 0);
	return (res);
}
