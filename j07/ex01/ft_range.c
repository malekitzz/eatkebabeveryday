/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:32:47 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/13 22:22:02 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int j;

	if (max <= min)
		return (0);
	tab = (int*)malloc(sizeof(int) * (max - min));
	j = 0;
	i = min;
	while (i < max)
	{
		tab[j] = i;
		j++;
		i++;
	}
	return (tab);
}
