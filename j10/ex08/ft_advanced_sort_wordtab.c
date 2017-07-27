/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 16:22:32 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/24 11:47:36 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *var;

	var = *a;
	*a = *b;
	*b = var;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = -1;
		}
		i++;
	}
}
