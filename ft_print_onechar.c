/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_onechar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:41:27 by clora-ro          #+#    #+#             */
/*   Updated: 2021/11/29 15:54:40 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	ft_print_onechar(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	if (ft_strlen(str) > 1 || ft_strlen(str) < 1)
		return (0);
	return (str);
}
