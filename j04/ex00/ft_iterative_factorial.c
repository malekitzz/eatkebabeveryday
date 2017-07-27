/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:01:02 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/10 12:13:48 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int i;

	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	result = 1;
	while (i < nb)
	{
		result = result * (i + 1);
		i++;
	}
	return (result);
}
