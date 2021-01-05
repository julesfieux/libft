/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:15:09 by jfieux            #+#    #+#             */
/*   Updated: 2020/12/16 16:06:11 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t i;
	size_t f;

	i = 0;
	if (!s1)
		return (0);
	if (!s2 || !s2[0])
		return ((char *)s1);
	while (s1[i] && i < size)
	{
		f = 0;
		while (s1[i + f] == s2[f] && s2[f] && (i + f) < size)
			f++;
		if (s2[f] == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (0);
}
