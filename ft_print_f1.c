/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:11:04 by sghajdao          #+#    #+#             */
/*   Updated: 2021/11/27 14:04:23 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_u(unsigned int nbr)
{
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		write(1, "(null)", 6);
	else
	{
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	}
}
