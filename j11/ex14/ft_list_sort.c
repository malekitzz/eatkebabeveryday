/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 02:55:48 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/26 10:31:40 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *list;
	t_list *tmp;

	list = NULL;
	while (list)
	{
		list = *begin_list;
		if (cmp(list, list->next) > 0)
		{
			tmp = list->next;
			list->next = list;
			list = tmp;
			*begin_list = list;
		}
	}
}
