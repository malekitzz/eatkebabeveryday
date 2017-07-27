/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 11:55:13 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/24 11:55:19 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	calc_print(int a, int b, int (*f)(int, int))
{
	ft_putnbr(f(a, b));
	ft_putchar('\n');
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int car;

	car = 0;
	i = 0;
	neg = 1;
	while (((str[i] >= 8) && (str[i] <= 13)) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
		car = car * 10 + (str[i++] - '0');
	return (car * neg);
}

void	calc(int a, int b, char sign)
{
	if (sign == '+')
		calc_print(a, b, &sum);
	else if (sign == '-')
		calc_print(a, b, &substract);
	else if (sign == '*')
		calc_print(a, b, &multiply);
	else if (sign == '/')
	{
		if (b == 0)
			write(1, "Stop : division by zero\n", 24);
		else
			calc_print(a, b, &divide);
	}
	else if (sign == '%')
	{
		if (b == 0)
			write(1, "Stop : modulo by zero\n", 22);
		else
			calc_print(a, b, &modulo);
	}
	else
	{
		write(1, "0\n", 2);
		return ;
	}
}

int		main(int argc, char **argv)
{
	int a;
	int b;
	int sign;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	sign = argv[2][0];
	calc(a, b, sign);
	return (0);
}
