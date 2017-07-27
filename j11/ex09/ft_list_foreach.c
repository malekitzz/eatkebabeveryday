/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:09:09 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/25 08:04:50 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list;

	if (begin_list)
	{
		list = begin_list;
		while (list != NULL)
		{
			(f(list->data));
			list = list->next;
		}
	}
}
