/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 02:49:28 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/26 10:31:27 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	list = *begin_list1;
	while (list)
	{
		list = *begin_list1;
		list = list->next;
		*begin_list1 = list;
	}
	list = begin_list2;
	while (list)
	{
		list = begin_list2;
		list = list->next;
		begin_list2 = list;
	}
}
