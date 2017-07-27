/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:39:09 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/10 12:19:08 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tmp;
	int		lenght;
	int		j;

	tmp = 0;
	j = 0;
	lenght = 0;
	while (str[lenght] != '\0')
		lenght++;
	lenght--;
	j = 0;
	while (j < lenght)
	{
		tmp = str[lenght];
		str[lenght] = str[j];
		str[j] = tmp;
		lenght--;
		j++;
	}
	return (str);
}
