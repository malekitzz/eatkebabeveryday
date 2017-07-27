/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:53:19 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/17 18:14:48 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	if (min >= max)
		return (0);
	range[0] = malloc(sizeof(int) * (max - min));
	i = min;
	j = 0;
	while (i < max)
	{
		range[0][j] = i;
		i++;
		j++;
	}
	return (max - min);
}
