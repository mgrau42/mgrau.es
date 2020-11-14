/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_store_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 12:42:06 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 14:02:39 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//guardamos el argumento y pasamos a las funciones de impresión

void	store_i(t_tab *t, t_flags *flags, va_list args)
{
	int		i;
	char	*c;
	char	*tmp;

	i = (va_arg(args, int));
	c = ft_itoa(i); /*guardamos la función como cadena para su impresión*/
	tmp = c;
	if (i < 0)
	{
		flags->int_is_neg = 1; /* en caso de ser negativo avanzamos en la cadena y guardamos esa info*/
		tmp++;
		t->len++;
	}
	if ((!c) || ((flags->precision <= 0) && (flags->convertf_is_dot == 1))) /* en caso que la cadena sea nula o la precisión sea menor o igual a 0 */
	{
		free(c);
		c = ft_strdup("");
	}
	if ((flags->convertf_is_zero == 0) && (flags->convertf_is_minus == 0)) // dependiendo de si tenemos algun flag conversor entraremos en alguna de las distintas funciones de impresión
		add_tonum(t, flags, tmp);
	else if (flags->convertf_is_minus == 1)
		add_tonum_minus(t, flags, tmp);
	else
		add_zero(t, flags, tmp);
	free(c);
}
