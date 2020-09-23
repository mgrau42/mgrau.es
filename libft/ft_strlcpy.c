/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:12:32 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/09 13:18:03 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//se realiza una copia de src a dest, se limita la copia con el (size)
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!src) 						/*se comprueba src*/
		return (0);
	if (size != 0)
	{
		while ((i + 1 < (size)) && (src[i] != '\0'))	/* se copia (size) bytes dejando espacio para el caracter nulo al final de la cadena*/
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = 0;					/*se añade el caracter nulo*/
	}
	while (src[i] != '\0')					/*se calcula el len de src*/
		i++;
	return (i);						/*se devuelve el len de src*/
}
