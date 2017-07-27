/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <ysalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 02:23:48 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/27 11:20:01 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *tmp;

	list = *begin_list;
	while (list)
	{
		if (cmp(list->data, data_ref) == 0)
		{
			tmp = list->next;
			free(list);
			list = tmp;
		}
		else
			list = list->next;
	}
}
