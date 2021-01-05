/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:13:35 by jfieux            #+#    #+#             */
/*   Updated: 2020/12/17 14:41:57 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	f;
	size_t	l;
	char	*str;

	i = 0;
	l = 0;
	f = start;
	while (l < len && s[f])
	{
		l++;
		f++;
	}
	if (!(str = malloc(sizeof(char) * (l + 1))))
		return (0);
	f = start;
	while (i < len && s[f])
	{
		str[i] = s[f];
		i++;
		f++;
	}
	str[i] = '\0';
	return (str);
}
