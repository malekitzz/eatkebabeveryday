/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 09:06:36 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/06 13:02:38 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar(nb);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + 48);
}

void	ecris(int a, int b)
{
	if (a < 10)
	{
		ft_putnbr(0);
	}
	ft_putnbr(a);
	ft_putchar(' ');
	if (b < 10)
	{
		ft_putnbr(0);
	}
	ft_putnbr(b);
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 99)
	{
		while (b <= 99)
		{
			ecris(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}
