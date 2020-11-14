/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_store_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:06:24 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 11:04:39 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// muy similar a store_p sin añadir 0x al principio de la cadena

int	store_x(t_tab *t, t_flags *flags, va_list args)
{
	int		i;
	char	*c;
	char	*tmp;

	i = (va_arg(args, int));
	c = ft_itoa_base(i, 16, t);
	tmp = c;
	if (((i < 0) && (*t->format == 'x' ? \
	(ft_strncmp(c, "ffffffff", 8) != 0) :\
	(ft_strncmp(c, "FFFFFFFF", 8)) != 0)))
		tmp++;
	if ((!c) || ((flags->precision <= 0) && (flags->convertf_is_dot == 1)))
	{
		free(c);
		c = ft_strdup("");
	}
	if ((flags->convertf_is_zero == 0) && (flags->convertf_is_minus == 0))
		add_tonum(t, flags, tmp);
	else if (flags->convertf_is_minus == 1)
		add_tonum_minus(t, flags, tmp);
	else
		add_zero(t, flags, tmp);
	free(c);
	return (1);
}
