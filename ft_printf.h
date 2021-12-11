/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:36:44 by sghajdao          #+#    #+#             */
/*   Updated: 2021/11/27 14:05:39 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int				ft_printf(const char *str, ...);
void			print_u(char c, unsigned int n);
void			print_c(char c, int a);
void			print_s(char c, char *s);
void			print_d(char c, int n);
void			print_hexa_p(unsigned long *n);
int				count(int n);
int				count_x(unsigned long n);
int				count_u(unsigned int n);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
void			ft_putnbr_u(unsigned int nbr);
void			print_hexa(unsigned long n);
void			print_hexax(unsigned long n);
void			ft_putstr(char *s);
unsigned int	ft_strlen(char *s);

#endif
