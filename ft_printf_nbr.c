/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:27:44 by clora-ro          #+#    #+#             */
/*   Updated: 2021/12/17 16:47:36 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	int long	res;

	res = nb;
	if (res < 0)
	{
		ft_putchar('-', count);
		res = res * -1;
	}
	if (res >= 10)
	{
		ft_putnbr(res / 10, count);
		ft_putnbr(res % 10, count);
	}
	else
	{
		ft_putchar(res + '0', count);
	}
}

void	ft_putnbr_unsigned(unsigned long int nb, int *count)
{
	unsigned long int	res;

	res = nb;
	if (res < 0)
	{
		ft_putchar('-', count);
		res = res * -1;
	}
	if (res >= 10)
	{
		ft_putnbr_unsigned(res / 10, count);
		ft_putnbr_unsigned(res % 10, count);
	}
	else
		ft_putchar(res + '0', count);
}

void	ft_putnbr_base(unsigned int nbr, char *base, int *count)
{
	unsigned int	nb;
	unsigned int	i;

	i = 0;
	nb = nbr;
	while (base[i])
		i++;
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	if (nb >= i)
	{
		ft_putnbr_base(nb / i, base, count);
		ft_putnbr_base(nb % i, base, count);
	}
	else
	{
		ft_putchar(base[nb], count);
	}
}

void	ft_putnbr_baselong(unsigned long long nbr, char *base, int *count)
{
	unsigned long long	nb;
	unsigned long long	i;

	i = 0;
	nb = nbr;
	while (base[i])
		i++;
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	if (nb >= i)
	{
		ft_putnbr_baselong(nb / i, base, count);
		ft_putnbr_baselong(nb % i, base, count);
	}
	else
	{
		ft_putchar(base[nb], count);
	}
}
