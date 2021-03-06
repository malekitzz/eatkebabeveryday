/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 22:34:28 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/11 08:42:43 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int j;

	j = 0;
	while (((j * j) != nb) && j < nb)
		j++;
	if (j > 0 && j < nb)
		return (j);
	else
		return (0);
}
