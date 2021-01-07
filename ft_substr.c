/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:13:35 by jfieux            #+#    #+#             */
/*   Updated: 2021/01/07 16:04:47 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	f;
	char	*str;

	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	f = 0;
	while (s[i])
	{
		if (f < len && i >= (size_t)start)
		{
			str[f] = s[i];
			f++;
		}
		i++;
	}
	str[f] = '\0';
	return (str);
}
