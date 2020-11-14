/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_general_specifiers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 11:19:21 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/07 10:54:15 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
// comprobamos que tipo de argumento nos solicitan y redirigimos a su función.

int	general_specifiers(t_tab *t, t_flags *flags)
{
	if (*t->format == flags->specifier_list[0])
		store_c(t, flags, t->args);
	else if (*t->format == flags->specifier_list[1])
		store_s(t, flags);
	else if (*t->format == flags->specifier_list[2])
		store_p(t, flags, t->args);
	else if ((*t->format == flags->specifier_list[3]) ||\
		(*t->format == flags->specifier_list[4]))
		store_i(t, flags, t->args);
	else if (*t->format == flags->specifier_list[5])
		store_u(t, flags, t->args);
	else if ((*t->format == flags->specifier_list[6]) ||\
		(*t->format == flags->specifier_list[7]))
		store_x(t, flags, t->args);
	else if (*t->format == flags->specifier_list[8])
		store_percent(t, flags);
	else
		t->iserror = 1;
	return (0);
}
