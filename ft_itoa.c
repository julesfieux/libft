/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:56:05 by jfieux            #+#    #+#             */
/*   Updated: 2021/01/07 16:23:48 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malres(long int num, char *res, int *i)
{
	if (num == 0)
		(*i)++;
	if (num < 0)
	{
		(*i)++;
		num = -num;
	}
	while (num > 0)
	{
		(*i)++;
		num = num / 10;
	}
	if (!(res = malloc(sizeof(char) * ((*i) + 1))))
		return (0);
	res[*i] = '\0';
	(*i)--;
	return (res);
}

static char	*ft_initial(long int num, char *res, int i)
{
	if (num < 0)
	{
		num = -num;
		res[0] = '-';
	}
	while (num > 0)
	{
		res[i] = ((num % 10) + '0');
		i--;
		num = num / 10;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	int			i;
	long int	num;
	char		*res;

	i = 0;
	res = NULL;
	num = n;
	if (!(res = ft_malres(num, res, &i)))
		return (0);
	if (num == 0)
	{
		res[0] = '0';
		return (res);
	}
	res = ft_initial(num, res, i);
	return (res);
}
