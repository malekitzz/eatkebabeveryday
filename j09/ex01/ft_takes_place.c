/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:47:08 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/13 19:03:55 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char *bla;

	bla = "THE FOLLOWING TAKES PLACE BETWEEN ";
	if (hour > 12 && hour < 23)
		printf("%s%d.00 P.M AND %d.00 P.M.\n", bla, (hour - 12), (hour - 11));
	if (hour < 11 && hour > 1)
		printf("%s%d.00 A.M AND %d.00 A.M.\n", bla, (hour), (hour + 1));
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M AND 1.00 A.M.\n");
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M AND 12.00 P.M.\n");
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M AND 1.00 P.M.\n");
	if (hour == 1)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 1.00 A.M AND 2.00 A.M.\n");
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M AND 12.00 A.M.\n");
}
