/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:07:15 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/11 21:34:21 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	size = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		size++;
	}
	dest[i] = '\0';
	return (size);
}
