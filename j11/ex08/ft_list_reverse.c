/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 17:00:49 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/25 08:04:06 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*tmp;
	t_list	*prev;

	list = *begin_list;
	if (*begin_list)
	{
		prev = NULL;
		while (list != NULL)
		{
			tmp = list->next;
			list->next = prev;
			prev = list;
			list = tmp;
		}
		*begin_list = prev;
	}
}
