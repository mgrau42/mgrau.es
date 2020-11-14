/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_store_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:58:56 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/07 10:32:56 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//guardamos el argumento y pasamos a las funciones de impresión

int	store_p(t_tab *t, t_flags *flags, va_list args)
{
	unsigned long		i;
	char				*c;
	char				*tmp;

	i = (va_arg(args, unsigned long));
	tmp = ft_itoa_base1(i, 16, t); /*guardamos la función como cadena para su impresión*/
	if ((!(c = ft_strcat("0x", tmp))) || \
	((flags->precision <= 0) && (flags->convertf_is_dot == 1))) /*añadimos 0x al principio de la cadena*/
	{
		free(c);
		c = ft_strdup("0x");
	}
	if ((flags->convertf_is_zero == 0) && (flags->convertf_is_minus == 0)) /*exactamente igual que la función store_i*/
		add_tonum(t, flags, c);
	else if (flags->convertf_is_minus == 1)
		add_tonum_minus(t, flags, c);
	else
		add_zero(t, flags, c);
	free(c);
	free(tmp);
	return (1);
}
