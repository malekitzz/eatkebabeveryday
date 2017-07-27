/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 00:45:56 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/25 15:27:18 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		i;

	i = 1;
	list = begin_list;
	if (begin_list)
	{
		while (list->next)
		{
			list = list->next;
			i++;
		}
	}
	else
		return (0);
	return (i);
}
