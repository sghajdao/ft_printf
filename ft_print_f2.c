/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:14:17 by sghajdao          #+#    #+#             */
/*   Updated: 2021/11/26 09:14:55 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (6);
	while (s[i])
		i++;
	return (i);
}

int	count(int n)
{
	int	i;

	i = 0;
	if (n > 0)
	{
		while (n != 0)
		{
			i++;
			n = n / 10;
		}
		return (i);
	}
	if (n < 0)
	{
		n = -n;
		while (n != 0)
		{
			i++;
			n = n / 10;
		}
		return (i + 1);
	}
	if (n == 0)
		return (1);
	return (i);
}

int	count_x(unsigned long n)
{
	int	i;

	i = 0;
	if (n > 0)
	{
		while (n != 0)
		{
			i++;
			n = n / 16;
		}
		return (i);
	}
	if (n < 0)
	{
		n = -n;
		while (n != 0)
		{
			i++;
			n = n / 16;
		}
		return (i + 1);
	}
	if (n == 0)
		return (1);
	return (i);
}

int	count_u(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 0)
	{
		while (n != 0)
		{
			i++;
			n = n / 10;
		}
		return (i);
	}
	if (n < 0)
	{
		n = -n;
		while (n != 0)
		{
			i++;
			n = n / 10;
		}
		return (i + 1);
	}
	if (n == 0)
		return (1);
	return (i);
}
