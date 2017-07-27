/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:33:30 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/12 10:38:31 by ysalaun          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int size;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	size = 0;
	while (size <= j)
	{
		dest[i] = src[size];
		i++;
		size++;
	}
	dest[i] = '\0';
	return (dest);
}
