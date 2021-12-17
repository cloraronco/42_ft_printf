/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:49:04 by clora-ro          #+#    #+#             */
/*   Updated: 2021/12/13 17:26:39 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_printf_p(va_list list_args, char c, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(list_args, int), count);
	else if (c == 's')
		ft_putstr(va_arg(list_args, char *), count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_baselong(va_arg(list_args, unsigned long long),
			"0123456789abcdef", count);
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(list_args, int), count);
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(list_args, unsigned int), count);
	else if (c == 'x')
		ft_putnbr_base(va_arg(list_args, unsigned long long),
			"0123456789abcdef", count);
	else if (c == 'X')
		ft_putnbr_base(va_arg(list_args, int), "0123456789ABCDEF", count);
	else if (c == '%')
		ft_putchar('%', count);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	list_args;

	count = 0;
	i = 0;
	va_start(list_args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_printf_p(list_args, str[i + 1], &count);
			i++;
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	va_end(list_args);
	return (count);
}
