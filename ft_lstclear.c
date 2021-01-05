/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfieux <jfieux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:36:40 by jfieux            #+#    #+#             */
/*   Updated: 2020/12/22 14:37:19 by jfieux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;

	if (!del || !lst || !*lst)
		return ;
	while (*lst && lst)
	{
		temp = *lst;
		ft_lstdelone(*lst, del);
		*lst = temp->next;
	}
}
