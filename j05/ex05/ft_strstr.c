/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:32:05 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/12 20:30:25 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i])
	{
		j = i;
		count = 0;
		while (str[j] == to_find[count])
		{
			j++;
			count++;
			if (to_find[count] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
