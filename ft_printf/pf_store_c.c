/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_store_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 11:18:20 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/01 13:09:28 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//guardamos el argumento y pasamos a las funciones de impresion
int	store_c(t_tab *t, t_flags *flags, va_list args)
{
	char	c[2];

	*c = (char)va_arg(args, int); // en este caso se trata de un solo caracter
	if (c[0] == 0)
		flags->isnull = 1;
	c[1] = '\0';
	add_spaces(t, flags, c);
	return (0);
}
