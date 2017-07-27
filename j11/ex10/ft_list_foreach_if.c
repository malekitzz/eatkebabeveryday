/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:14:19 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/26 02:14:07 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list	*list;

	list = begin_list;
	while (list)
	{
		if (cmp(list->data, data_ref) == 0)
			(f(list->data));
		list = list->next;
	}
}
