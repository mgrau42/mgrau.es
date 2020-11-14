/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_arg_treatment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 11:20:28 by mgrau             #+#    #+#             */
/*   Updated: 2020/11/05 13:58:13 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// En esta función inicializamos nuestra estructura t_flags que usaremos más adelante para manejar cada flag de forma más fácil
// Si existe algún flag conversor se redirige la función hacia general_converter
// La función general specifiers se encargará de redirigir la función hacia el tratamiento adecuado según el tipo de variable
char	*arg_treatment(t_tab *t)
{
	t_flags flags;

	t->format++; 						/*avanzamos en la cadena*/
	if (*t->format == ' ') 					/*en caso de encontrarnos con uno o más espacios tras nuestro '%' se escribe el primer espacio y se avanza hasta el primer carácter distinto de espacio*/
		write(1, t->format, 1);
	while (*t->format == ' ')
		t->format++;
	ft_bzero(&flags, sizeof(flags)); 			/*se inicializa nuestra estructura poniendo sus elementos a cero*/
	flags = iniflags(flags); 				/*se usa para inicializar la lista de especificadores de tipo de variable*/
	while ((*t->format == '-') || (*t->format == '.')\
	|| (*t->format == '*') || (ft_isdigit(*t->format))) 	/*en caso de encontrar algún flag conversor entramos en general converter*/
		t->format = general_converter(t->format, &flags, t->args);
	general_specifiers(t, &flags); 				/*proseguimos hacia general_specifiers*/
	if (t->iserror == 1)
		return (t->format);
	return (++t->format); 					/*después de haber impreso nuestra variable volvemos a nuestra funcion printf principal*/
}
