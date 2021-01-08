/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:09:25 by jfieux            #+#    #+#             */
/*   Updated: 2021/01/08 16:16:26 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isset(char c, const char *set)
{
	int		i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	if (set[i] == '\0')
		return (0);
	return (1);
}

static char		*ft_initialize(const char *s1, char *res, int len, int i)
{
	int j;

	j = 0;
	while (j < len)
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		len;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] && ft_isset(s1[i], set) == 1)
		i++;
	len = 0;
	while (s1[i])
	{
		j = 0;
		while (ft_isset(s1[i + j], set) == 1)
			j++;
		if (s1[i + j] == '\0')
			break ;
		i++;
		len++;
	}
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (0);
	i = i - len;
	res = ft_initialize(s1, res, len, i);
	return (res);
}
