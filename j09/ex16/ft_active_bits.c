/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:01:50 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/14 11:01:57 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int		remainder;
	long	binary;
	int		active;
	int		i;

	active = 0;
	i = 0;
	binary = 0;
	while (value != 0)
	{
		remainder = value % 2;
		value = value / 2;
		binary = binary + (remainder * i);
		i = i * 10;
		if (remainder == 1)
			active++;
	}
	return (active);
}
