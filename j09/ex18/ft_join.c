/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 10:44:33 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/14 11:14:45 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_join(char **tab, char *sep)
{
	int i;
	int j;
	char *tab2;

	j = 0;
	while (tab2[j])
	{
		printf("a");
		i = 0;
		while (tab2[j][i])
		{
			printf("b");
			i++;
		}
		j++;
	}

	
}
int main ()
{
	char tab[4][6] = {{"salut"}, {"coucou"}, {"commen"}, {"sava"}};
	char *sep;
	sep = " ";

	ft_join(tab, sep);
	return(0);
}
