/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:49:04 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/29 15:55:39 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* faire fonction en parametre int */
/* va_arg aussi    */

int	ft_printf(char *param, ...)
{
	va_list	argptr;

	if (ft_strrchr_custom(param, "%c"))
//fonction qui cherche si la chaine contient "%c"
//en ignorant ce qui peut se trouver autour de %c
		return (ft_putstr(ft_print_onechar(argptr)));
	if (ft_strrchr_custum(param, "%s"))
// donc la fontion retourne 1 ou 0
		return (ft_putstr(ft_print_char(argptr)));
	if (ft_strrchr_custum(param, "%p"))
		ft_print_void_hexa(argptr);
	if (ft_strrchr_custum(param, "%d"))
		ft_print_decimal(argptr);
	if (ft_strrchr_custum(param, "%i"))
		ft_print_int_decimal(argptr);
	if (ft_strrchr_custum(param, "%u"))
		ft_print_unsigned_decimal(argptr);
	if (ft_strrchr_custum(param, "%x"))
		ft_print_hexa(argptr);
	if (ft_strrchr_custum(param, "%%"))
		ft_print_percent(argptr);
}
