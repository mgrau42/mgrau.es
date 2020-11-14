/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_store_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 10:32:37 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 11:02:11 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//guardamos el argumento y pasamos a las funciones de impresión

int	store_s(t_tab *t, t_flags *flags)
{
	char	*c;
	int		must_free;

	must_free = 0; // necesario para el caso concreto de que la cadena sea nula
	c = va_arg(t->args, char *);
	if (!(c))
	{
		c = ft_strdup("(null)");
		must_free = 1;
	}
	if (flags->convertf_is_zero == 1)
		return (0);
	else
		add_spaces(t, flags, c);
	if (must_free)
		free(c);
	return (1);
}
