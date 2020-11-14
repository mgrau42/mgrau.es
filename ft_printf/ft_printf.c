/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 10:23:52 by mgrau             #+#    #+#             */
/*   Updated: 2020/11/05 13:42:49 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//Iniciamos la función print declarando una estructura t_tab que contiene una copia de la cadena de formato, el entero que usaremos para contar
//Los caracteres escritos y el cual devolveremos al final de nuestra función y la lista de argumentos que procedemos a inicializar.
// escribimos el contenido de nuestra cadena de formato, hasta encontrar el carácter '%' el cual puede significar el uso de alguna de las variables de la lista.
int		ft_printf(const char *formatstr, ...)
{
	t_tab	t;

	t.len = 0;
	t.format = (char *)formatstr;
	t.iserror = 0; 					/*se usa para notificar algún error en la función y por tanto detenerla*/
	va_start(t.args, formatstr); 			/* inicializamos nuestra va_list, la lista de argumentos*/
	while (*t.format)				/* avanzamos por nuestra cadena*/
	{
		if ((*t.format) == '%')
			(t.format = arg_treatment(&t)); /* en caso de encontrar un '%' pasamos al tratamiento del argumento*/
		else
		{
			write(1, t.format++, 1); 	/* en caso contrario vamos escribiendo*/
			t.len++;
		}
	}
	va_end(t.args); 				/*cerramos la lista de argumentos*/
	if (t.iserror)
		return (0);
	return (t.len); 				/*devolvemos la cantidad de caracteres impreso*/
}
