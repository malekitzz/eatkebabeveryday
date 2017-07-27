/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 09:01:35 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/18 12:19:23 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_params(char *str)
{
	int i;
	int word;

	word = 0;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\n' ||
				str[i] == '\t') && str[i] != '\0')
		i++;
	while (str[i])
	{
		word++;
		while (str[i] >= 33 && str[i] <= 126)
			i++;
		while ((str[i] == ' ' || str[i] == '\n' ||
					str[i] == '\t') && str[i] != '\0')
			i++;
	}
	return (word);
}

int		count_caracs(char *str, int *pos)
{
	int letter;

	letter = 0;
	while (str[*pos] == ' ' || str[*pos] == '\n' || str[*pos] == '\t')
		(*pos)++;
	while (str[*pos] != ' ' && str[*pos] != '\t' &&
			str[*pos] != '\n' && str[*pos] != '\0')
	{
		letter++;
		(*pos)++;
	}
	return (letter - 1);
}

char	*write_my_tab(char *str, int *pos)
{
	int		k;
	char	*tab;
	int		i;
	int		count;

	while (str[*pos] == ' ' || str[*pos] == '\t' || str[*pos] == '\n')
		(*pos)++;
	i = *pos;
	count = count_caracs(str, pos);
	tab = (char *)malloc(sizeof(char) * count + 1);
	k = 0;
	while (k <= count)
	{
		tab[k] = str[i];
		k++;
		i++;
	}
	tab[k] = '\0';
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		k;
	char	**tab;
	int		pos;
	int		count_par;

	count_par = count_params(str);
	pos = 0;
	k = 0;
	tab = (char**)malloc(sizeof(char*) * count_par + 1);
	while (k < count_par)
	{
		tab[k] = write_my_tab(str, &pos);
		k++;
	}
	tab[k] = 0;
	return (tab);
}
