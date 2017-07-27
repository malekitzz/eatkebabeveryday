/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:57:58 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/13 09:55:27 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int i;

	i = nb;
	if (nb < 0)
	{
		i = -nb;
		ft_putchar('-');
	}
	if (i >= 10)
	{
		ft_putnbr_base(i / ft_strlen(base));
		ft_putnbr_base(i % ft_strlen(base));
	}
	else
		ft_putchar(i + '0');
}
