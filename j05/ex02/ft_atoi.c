/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:44:01 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/20 08:16:28 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int var;
	int neg;

	var = 0;
	neg = 0;
	i = 0;
	while (((str[i] >= 8) && (str[i] <= 13)) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
		var = var * 10 + str[i++] - '0';
	if (neg == 1)
		return (-var);
	return (var);
}