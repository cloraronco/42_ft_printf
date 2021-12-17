/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:41:37 by clora-ro          #+#    #+#             */
/*   Updated: 2021/12/17 16:46:53 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_printf_p(va_list argptr, char c, int *count);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putnbr_base(unsigned int nbr, char *base, int *count);
void	ft_putnbr_baselong(unsigned long long int nbr, char *base, int *count);
void	ft_putnbr_unsigned(unsigned long int nb, int *count);
void	ft_putstr(char *str, int *count);

#endif
