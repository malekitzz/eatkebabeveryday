/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:21:15 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/11 21:50:56 by ysalaun          ###   ########.fr       */
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

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int var;
	int neg;
	int count;

	count = 0;
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
		var = var * ft_strlen(base) + str[i++] - '0';
	if (neg == 1)
		return (-var);
	return (var);
}
