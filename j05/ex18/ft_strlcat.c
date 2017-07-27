/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:22:15 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/13 12:52:15 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int count;

	i = 0;
	count = 0;
	j = ft_strlen(dest);
	j--;
	while (src[i] && j < size)
	{
		dest[j] = src[i];
		j++;
		i++;
		count++;
	}
	dest[j] = '\0';
	if (j + i < size)
		return (count + size);
	else
		return (i);
}
