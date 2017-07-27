/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 09:38:59 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/25 07:53:56 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (!(*begin_list))
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	list = *begin_list;
	while (list && list->next)
		list = list->next;
	list->next = ft_create_elem(data);
}
