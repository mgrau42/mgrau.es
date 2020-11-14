/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 11:29:16 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 12:00:56 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int		ft_abs(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

char			*ft_itoa_base(unsigned long int value, int base, t_tab *t)
{
	char					*str;
	int						size;
	char					*tab;
	unsigned long int		tmp;

	size = 0;
	if (*t->format == 'X')
		tab = "0123456789ABCDEF";
	else
		tab = "0123456789abcdef";
	tmp = value;
	while ((tmp /= base) && (size < 8))
		size++;
	size = size + 1;
	if (value >= ULONG_MAX)
		size--;
	str = (char *)malloc(sizeof(char) * size + 1);
	str[size] = '\0';
	while (size > 0)
	{
		str[size - 1] = tab[ft_abs(value % base)];
		size--;
		value /= base;
	}
	return (str);
}

char			*ft_itoa_base1(unsigned long int value, int base, t_tab *t)
{
	char					*str;
	int						size;
	char					*tab;
	unsigned long int		tmp;

	size = 0;
	if (*t->format == 'X')
		tab = "0123456789ABCDEF";
	else
		tab = "0123456789abcdef";
	tmp = value;
	while (tmp /= base)
		size++;
	size = size + 1;
	if (value >= ULONG_MAX)
		size--;
	str = (char *)malloc(sizeof(char) * size + 1);
	str[size] = '\0';
	while (size > 0)
	{
		str[size - 1] = tab[ft_abs(value % base)];
		size--;
		value /= base;
	}
	return (str);
}
