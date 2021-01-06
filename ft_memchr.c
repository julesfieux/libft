/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:12:58 by jfieux            #+#    #+#             */
/*   Updated: 2021/01/06 10:35:39 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;

	str = (char *)s;
	while (*str && n > 0)
	{
		if (*str == c)
			return (str);
		str++;
		n--;
	}
	return (0);
}
