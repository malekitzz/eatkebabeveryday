/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:51:12 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/07 04:52:37 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int var;
	int n;

	var = 0;
	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] > 7 && str[i] <= 13) || str[i] == '+')
			i++;
		if (str[i] == '-')
		{
			n = 1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
			var = (var * 10) + (str[i++] - '0');
		if (n == 1)
			return (-var);
		return (var);
	}
	return (var);
}
