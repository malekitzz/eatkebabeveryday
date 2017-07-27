/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 00:04:33 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/06 20:27:54 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long var;

	var = (long)nb;
	if (nb < 0)
	{
		var = -nb;
		ft_putchar('-');
	}
	if (var >= 9)
	{
		ft_putnbr(var / 10);
		ft_putnbr(var % 10);
	}
	else
	{
		ft_putchar(var + '0');
	}
}
