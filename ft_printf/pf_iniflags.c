/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_iniflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 11:12:18 by mgrau             #+#    #+#             */
/*   Updated: 2020/09/24 13:28:34 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_flags	iniflags(t_flags flags)
{
	flags.specifier_list[0] = 'c';
	flags.specifier_list[1] = 's';
	flags.specifier_list[2] = 'p';
	flags.specifier_list[3] = 'd';
	flags.specifier_list[4] = 'i';
	flags.specifier_list[5] = 'u';
	flags.specifier_list[6] = 'x';
	flags.specifier_list[7] = 'X';
	flags.specifier_list[8] = '%';
	return (flags);
}
