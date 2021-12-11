/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cspdiuxX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:06:45 by sghajdao          #+#    #+#             */
/*   Updated: 2021/11/26 09:10:23 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_u(char c, unsigned int n)
{
	if (c == 'u')
		ft_putnbr_u(n);
	if (c == 'x')
		print_hexa(n);
	if (c == 'X')
		print_hexax(n);
}

void	print_c(char c, int a)
{
	if (c == 'c')
		ft_putchar(a);
}

void	print_s(char c, char *s)
{
	if (c == 's')
		ft_putstr(s);
}

void	print_d(char c, int n)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(n);
}
