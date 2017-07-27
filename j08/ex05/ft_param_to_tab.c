/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:27:10 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/18 20:39:35 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
