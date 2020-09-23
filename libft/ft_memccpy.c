/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:29:48 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/06 13:30:30 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//esta funcion copia tantos bytes (n) de una cadena a otra
//parando ademas si encuentra el caracter c en la cadena original
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*cfound;

	i = 0;
	while (i < n)								/*se copia la cadena hasta el tamaño (n)*/
	{
		if (((unsigned char *)src)[i] == ((unsigned char)c))		/*en caso de encontrar el caracter c se realiza una ultima copia y se devuelve un puntero a ese caracter*/
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
			cfound = &(((unsigned char *)dest)[i]);
			return (cfound);
		}
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (NULL);								/*en caso de no encotrar el caracter se realiza la copia y se devuelve nulo*/
}
