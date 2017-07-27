/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 10:57:28 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/21 12:04:52 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tabz;

	i = 0;
	tabz = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		tabz[i] = (f(tab[i]));
		i++;
	}
	return (tabz);
}
