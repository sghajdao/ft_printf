/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:18:32 by sghajdao          #+#    #+#             */
/*   Updated: 2021/11/27 14:03:10 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa(unsigned long n)
{
	char	c;

	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		if (n > 15)
		{
			print_hexa(n / 16);
			if ((n % 16) >= 10 && (n % 16) <= 15)
			{
				c = 'a' + ((n % 16) - 10);
				ft_putchar(c);
				return ;
			}
			ft_putchar(n % 16 + '0');
		}
		if (n <= 15)
		{
			c = 'a' + (n - 10);
			ft_putchar(c);
		}
	}
}

void	print_hexax(unsigned long n)
{
	char	c;

	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		if (n > 15)
		{
			print_hexax(n / 16);
			if ((n % 16) >= 10 && (n % 16) <= 15)
			{
				c = 'A' + ((n % 16) - 10);
				ft_putchar(c);
				return ;
			}
			ft_putchar(n % 16 + '0');
		}
		if (n <= 15)
		{
			c = 'A' + (n - 10);
			ft_putchar(c);
		}
	}
}

static void	traiter(char c, va_list ptr)
{
	unsigned long	*p;

	if (c == 'c')
		print_c(c, va_arg(ptr, int));
	if (c == 's')
		print_s(c, va_arg(ptr, char *));
	if (c == 'd' || c == 'i')
		print_d(c, va_arg(ptr, int));
	if (c == 'u')
		print_u(c, va_arg(ptr, unsigned int));
	if (c == '%')
		ft_putchar('%');
	if (c == 'x' || c == 'X')
		print_u(c, va_arg(ptr, unsigned int));
	if (c == 'p')
	{
		ft_putstr("0x");
		p = va_arg(ptr, void *);
		print_hexa((unsigned long)p);
	}
}

static int	hsab(char c, va_list ptr)
{
	int		i;

	i = 0;
	if (c == 'c')
		i = 1;
	if (c == 's')
		i = ft_strlen(va_arg(ptr, char *));
	if (c == 'd' || c == 'i')
		i = count(va_arg(ptr, int));
	if (c == 'x' || c == 'X')
		i = count_x(va_arg(ptr, unsigned int));
	if (c == 'u')
		i = count_u(va_arg(ptr, unsigned int));
	if (c == '%')
		i = 1;
	if (c == 'p')
		i = count_x(va_arg(ptr, unsigned long)) + 2;
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		k;
	va_list	ptr;
	va_list	j;

	i = 0;
	k = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			va_copy(j, ptr);
			traiter(str[i], ptr);
			k = k + hsab(str[i], j) - 2;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(ptr);
	va_end(j);
	i = i + k;
	return (i);
}
