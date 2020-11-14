/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_store_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 11:10:00 by mgrau             #+#    #+#             */
/*   Updated: 2020/09/30 10:52:53 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// esta función es prácticamente igual que la función que guarda el ancho
// se realiza una copia de la porción numérica o busca el argumento

char	*store_precision(char *format, t_flags *flags, va_list args)
{
	flags->convertf_is_dot = 1;
	if (*format == '*')
	{
		flags->precision = va_arg(args, int); 		// en caso de estar guardada como argumento
		if (flags->precision < 0)
			flags->convertf_is_dot = 0;
		return (++format);
	}
	else
		format = scommon(format, &flags->precision);	 //scommon se usa tanto para guardar la precisión como el ancho cuando estan en nuestro string de formato
	return (format);
}
