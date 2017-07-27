/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 11:48:50 by ysalaun           #+#    #+#             */
/*   Updated: 2017/07/24 11:57:24 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include <unistd.h>

void	calc_print(int a, int b, int(*f)(int, int));
int		ft_atoi(char *str);
void	calc(int a, int b, char sign);
int		sum(int a, int b);
int		divide(int a, int b);
int		substract(int a, int b);
int		multiply(int a, int b);
int		modulo(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
