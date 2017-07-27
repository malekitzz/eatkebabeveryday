/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:12:15 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/24 12:48:48 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	while (argv[i])
		i++;
	tab = (char *)malloc(sizeof(char) * (i + 1));
	i = 1;
	k = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			tab[k++] = argv[i][j];
			j++;
		}
		if (i != argc - 1)
			tab[k++] = '\n';
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
