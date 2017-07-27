/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <ysalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 15:56:46 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/27 10:32:28 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*next;
	t_list	*list;

	list = *begin_list;
	while (list != NULL)
	{
		next = list->next;
		free(list);
		list = next;
	}
	*begin_list = NULL;
}
