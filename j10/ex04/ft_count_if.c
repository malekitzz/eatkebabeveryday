/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 14:08:17 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/20 16:37:03 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int test;

	test = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			test++;
		i++;
	}
	return (test);
}