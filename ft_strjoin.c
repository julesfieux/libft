/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:24:44 by jfieux            #+#    #+#             */
/*   Updated: 2021/01/08 16:23:15 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*join_init(char *res, char const *s1, char const *s2, int i)
{
	int j;

	j = 0;
	while (s1[i])
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		res[j] = s2[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*res;

	if (!s1 || !s2)
		return (0);
	len = (ft_strlen(s1) + ft_strlen(s2));
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (0);
	join_init(res, s1, s2, 0);
	return (res);
}
