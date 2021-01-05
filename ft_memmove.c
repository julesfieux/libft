/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:18:04 by jfieux            #+#    #+#             */
/*   Updated: 2020/11/25 18:31:16 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;

	if (!dest && !src)
		return (0);
	i = 0;
	d = (char *)dest;
	if (dest > src)
	{
		while (n > 0)
		{
			d[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
