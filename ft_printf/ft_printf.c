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

//El objetivo de este proyecto ha sido recrea la funcion printf de las librerias estandar.
//el formato debe ser exactamente igual al del printf original, por ejemplo:
//
//ft_printf("%s World %d\n", "Hello", 42);
//printf("%s World %d\n", "Hello", 42);
//
//Deberia mostrar
//
// Hello World 42
// Hello World 42
//
// Se diseño este proyecto para entender como se han de usar los argumentos variables.
// ft_print ha de cumplir los siguientes requisitos:
//
//	Manejar las siguientes conversiones: c s p d i u x X %
//	Manejar los siguientes flags - 0 . *
//	Manejar las conversiones de precision y de ancho
//	El proyecto ha de usar el comando ar para crear la libreria

//Iniciamos la funcion print declarando una estructura t_tab que contine una copia de la cadena de formato, el entero que usaremos para contar
//Los caracteres escritos y el cual devolveremos al final de nuestra funcion y la lista de argumentos que procedemos a inicializar.
// escribimos el contenido de nuestra cadena de formato, hasta encontrar el caracter '%' el cual puede significar el uso de alguna de las variables de la lista.
int		ft_printf(const char *formatstr, ...)
{
	t_tab	t;

	t.len = 0;
	t.format = (char *)formatstr;
	t.iserror = 0; /*se usa para notificar algun error en la funcion y por tanto detenerla*/
	va_start(t.args, formatstr); /* inicializamos nuestra va_list, la lista de argumentos*/
	while (*t.format) /* avanzamos por nuestra cadena*/
	{
		if ((*t.format) == '%')
			(t.format = arg_treatment(&t)); /* en caso de encontrar un '%' pasamos al tratamiento del argumento*/
		else
		{
			write(1, t.format++, 1); /* en caso contrario vamos escribiendo*/
			t.len++;
		}
	}
	va_end(t.args); /*cerramos la lista de argumentos*/
	if (t.iserror)
		return (0);
	return (t.len); /*devolvemos la cantidad de caracteres impreso*/
}
