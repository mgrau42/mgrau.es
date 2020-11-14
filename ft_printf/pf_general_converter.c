/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_general_converter.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 11:13:48 by mgrau             #+#    #+#             */
/*   Updated: 2020/09/29 14:07:14 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//determina si existe algun caracter conversor
char	*general_converter(char *format, t_flags *flags, va_list args)
{
	while ((*format == '-') || (*format == '0')) /* en caso de existir - o 0 se guarda esa informacion para su posterior uso */
	{
		if (*(format++) == '-')
			flags->convertf_is_minus = 1;
		else
			flags->convertf_is_zero = 1;
	}
	if ((*format == '*') || (ft_isdigit(*format))) /*en caso de estar determinado el ancho o la precison se entra en las funciones store_ donde se guardan esos valores*/
		format = store_width(format, flags, args);
	if (*format == '.')
		format = store_precision(++format, flags, args);
	return (format);
}
