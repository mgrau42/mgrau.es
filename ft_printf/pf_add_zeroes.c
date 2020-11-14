/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_add_zeroes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 13:23:04 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 13:41:17 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// funciones de impresión con las cuales se puede imprimir los espacios y 0s
// extra determinados por la precisión y el width
// el uso de cada una depende de los flags conversores usado, son muy parecidas funcionan igual, pero imprimen cosas en orden distinto o el cálculo es de space y num es ligeramente distinto.

void	add_tonum(t_tab *t, t_flags *flags, char *c)
{
	long int	num;
	long int	spaces;
	int			varlen;

	num = 0;
	spaces = 0;
	varlen = (flags->isnull ? 1 : ft_strlen(c));
	if ((flags->convertf_is_dot == 1) && (flags->precision > varlen)) 	//en esta primera parte determinamos cuanto vale spaces y num
		spaces = flags->field_width - \
		(flags->precision + flags->int_is_neg);
	else
	{
		spaces = flags->field_width - (varlen + flags->int_is_neg);
		(flags->convertf_is_dot = 0);
	}
	num = flags->precision - varlen;
	print_space(spaces, &t->len); 						// sabiendo el valor de estos imprimimos en el orden necesario
	if (flags->int_is_neg)
		write(1, "-", 1);
	print_zero(num, &t->len);
	add_general(t, flags, c);
}

void	add_tonum_minus(t_tab *t, t_flags *flags, char *c)
{
	long int	num;
	long int	spaces;
	int			varlen;

	num = 0;
	spaces = 0;
	varlen = (flags->isnull ? 1 : ft_strlen(c));
	if (flags->int_is_neg)
		write(1, "-", 1);
	if ((flags->convertf_is_dot == 1) && (flags->precision > varlen))
		spaces = flags->field_width - \
		(flags->precision + flags->int_is_neg);
	else
	{
		spaces = flags->field_width - \
		(varlen + flags->int_is_neg);
		(flags->convertf_is_dot = 0);
	}
	num = flags->precision - (varlen);
	print_zero(num, &t->len);
	add_general(t, flags, c);
	print_space(spaces, &t->len);
}

void	add_zero(t_tab *t, t_flags *flags, char *c)
{
	long int	num;
	long int	spaces;
	int			varlen;

	num = 0;
	spaces = 0;
	varlen = (flags->isnull ? 1 : ft_strlen(c));
	if (flags->convertf_is_dot == 0)
		num = flags->field_width - \
		(varlen + flags->int_is_neg);
	else if (flags->precision > varlen)
	{
		spaces = flags->field_width - \
		(flags->precision + flags->int_is_neg);
		num = flags->precision - varlen;
	}
	else if ((flags->field_width > (varlen + flags->int_is_neg)))
		spaces = flags->field_width - \
		(varlen + flags->int_is_neg);
	flags->convertf_is_dot = 0;
	print_space(spaces, &t->len);
	if (flags->int_is_neg)
		write(1, "-", 1);
	print_zero(num, &t->len);
	add_general(t, flags, c);
}

void	print_zero(long int add, int *len)
{
	while (add-- > 0)
	{
		write(1, "0", 1);
		(*len)++;
	}
}
