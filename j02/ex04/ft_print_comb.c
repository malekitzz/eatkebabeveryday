/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:39:45 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/05 16:04:50 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(char i, char j, char k)
{
	if ((i != j) && (j != k) && (i != k) && (k >= j) && (j >= i))
	{
		ft_putchar(i + 48);
		ft_putchar(j + 48);
		ft_putchar(k + 48);
		if (!(i == 7 && j == 8 && k == 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	i = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				print(i, j, k);
				k++;
			}
			j++;
			k = 0;
		}
		i++;
		j = 0;
	}
}
