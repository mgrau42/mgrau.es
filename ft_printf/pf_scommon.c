/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_scommon.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:30:47 by mgrau             #+#    #+#             */
/*   Updated: 2020/09/30 10:53:29 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// se usa para guardar la info de precisión o ancho de la cadena format en data
char	*scommon(char *format, int *data)
{
	int		s_len;
	char	*start;
	char	*s_str;

	s_len = 0;
	start = format;
	while (ft_isdigit(*format))
	{
		s_len++;
		format++;
	}
	s_str = malloc(sizeof(char) * (++s_len));
	ft_strlcpy(s_str, start, s_len);
	*data = (long int)ft_atoi(s_str);
	free(s_str);
	return (format);
}
