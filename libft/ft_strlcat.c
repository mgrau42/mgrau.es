/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:10:55 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/20 12:41:37 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//se concatenan los strings, se limita la concatenacion con el (size)
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		b;

	i = ft_strlen(dest);				/*se calcula la longitud del destino*/
	b = ft_strlen(src) + i;				/*la longitud que seria la cadena maxima resultante*/
	if (i > size)					/*en caso que el destino sea mayor que el tamaño de la concatenacion se devuelve el tamaño de src + size*/
		return (b = b + size - i);
	while ((*src) && (i + 1) < size)		/*mientras estemos recorriendo src y no hayamos llegado a limite aportado por size seguimos concatenando, teniendo en cuenta el espacio para el nulo*/
		dest[i++] = *src++;
	dest[i] = 0;					/*se finaliza la cadena*/
	return (b);					/*se devuelve el tamaño ya calculado len de dest original + len de src*/
}
