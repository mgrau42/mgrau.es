/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_store_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 13:09:25 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/01 11:15:34 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// similar a a store_c, se guarda el carácter % para su impresión en c
int	store_percent(t_tab *t, t_flags *flags)
{
	char	*c;

	flags->is_percent = 1;
	c = t->format;
	if ((flags->convertf_is_zero == 1) && (flags->convertf_is_minus == 0))
		add_zero(t, flags, c);
	else
		add_spaces(t, flags, c);
	return (1);
}
