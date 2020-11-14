/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_add_general.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:31:13 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 13:50:50 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	add_general(t_tab *t, t_flags *flags, char *c)
{
	if ((flags->isnull))
	{
		write(1, "\x00", 1);
		flags->isnull = 0;
		t->len++;
	}
	else
	{
		while ((((flags->convertf_is_dot == 1) &&\
		(flags->precision < ft_strlen(c)))\
		? flags->precision > 0 : (*c)))
		{
			write(1, c++, 1);
			t->len++;
			flags->precision--;
			if (flags->is_percent == 1)
				return ;
		}
	}
}
