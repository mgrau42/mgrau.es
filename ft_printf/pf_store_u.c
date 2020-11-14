/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_store_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 13:51:10 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/01 13:55:57 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// practicamente igual que la funcion store_i
int	store_u(t_tab *t, t_flags *flags, va_list args)
{
	int		i;
	char	*c;
	char	*tmp;

	i = (va_arg(args, int));
	c = ft_itoa_un(i);
	tmp = c;
	if ((!c) || ((flags->precision <= 0) && (flags->convertf_is_dot == 1)))
	{
		free(c);
		c = NULL;
		c = ft_strdup("");
	}
	if ((flags->convertf_is_zero == 0) && (flags->convertf_is_minus == 0))
		add_tonum(t, flags, tmp);
	else if (flags->convertf_is_minus == 1)
		add_tonum_minus(t, flags, tmp);
	else
		add_zero(t, flags, tmp);
	free(c);
	c = NULL;
	return (1);
}
