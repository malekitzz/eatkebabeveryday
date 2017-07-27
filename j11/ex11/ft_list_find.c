/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <ysalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 13:57:52 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/27 10:37:23 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;

	list = begin_list;
	while (list && list->next)
	{
		if (cmp(list->data, data_ref) == 0)
			return (list);
		list = list->next;
	}
	return (0);
}
