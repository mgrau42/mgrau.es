/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:20:38 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/21 10:16:03 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//esta funcion copia ceros en los primeros bytes (n) de la cadena (str)
void	*ft_bzero(void *str, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n) 				/*se cicla y se van poniendo los ceros*/
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);				/*se devuelve la cadena con sus posiciones inicializadas a 0*/
}
