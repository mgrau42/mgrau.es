/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_store_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 11:10:36 by mgrau             #+#    #+#             */
/*   Updated: 2020/09/30 10:52:30 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// esta funcion es practicamente igual que la funcion que guarda la precision
// se realiza una copia de la porcion numerica o busca el argumento

char	*store_width(char *format, t_flags *flags, va_list args)
{
	flags->convertf_is_width = 1;
	if (*format == '*')
	{
		flags->field_width = va_arg(args, int); // en caso de estar guardada como argumento
		if (flags->field_width < 0)
		{
			flags->convertf_is_minus = 1;
			flags->field_width = -flags->field_width;
		}
		return (++format);
	}
	else
		format = scommon(format, &flags->field_width); //scommon se usa tanto para guardar la precision como el ancho cuando estan en nuestro string de formato
	return (format);
}
