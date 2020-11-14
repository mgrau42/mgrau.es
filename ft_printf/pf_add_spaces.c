/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_add_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 11:15:31 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 13:41:23 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// funcion de impresion comun con la cual se puede imprimir los espacion extra determinados por la precision y el width
void	add_spaces(t_tab *t, t_flags *flags, char *c)
{
	long int	add; // este sera nuestro numero de espacios a imprimir
	int			varlen;

	add = 0;
	varlen = (flags->isnull ? 1 : ft_strlen(c));
	if ((flags->convertf_is_dot == 1) &&\
	(flags->precision < varlen))
		add = flags->field_width - flags->precision;
	else if (flags->field_width > varlen)
		add = flags->field_width - varlen;
	if (flags->convertf_is_minus == 1)
		add_general(t, flags, c); /*funcion de impresion general*/
	print_space(add, &t->len);
	if (flags->convertf_is_minus == 0)
		add_general(t, flags, c);
}

void	print_space(long int add, int *len) /*funcion de impresion de espacios*/
{
	while (add-- > 0)
	{
		write(1, " ", 1);
		(*len)++;
	}
}
