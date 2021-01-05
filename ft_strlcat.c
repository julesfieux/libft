/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:09:07 by jfieux            #+#    #+#             */
/*   Updated: 2021/01/05 11:10:05 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *str, size_t size)
{
	size_t len;

	len = 0;
	while (str[len] != '\0' && len < size)
	{
		len++;
	}
	return (len);
}

static char		*ft_strncpy(char *dst, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

size_t			ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	busy_vol;
	int		src_len;

	busy_vol = ft_strnlen(dest, size);
	src_len = ft_strlen(src);
	if (busy_vol == size)
		return (src_len + size);
	if (busy_vol + src_len < size)
		ft_strncpy(dest + busy_vol, src, src_len + 1);
	else
	{
		ft_strncpy(dest + busy_vol, src, size - busy_vol - 1);
		dest[size - 1] = '\0';
	}
	return (busy_vol + src_len);
}
