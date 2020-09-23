/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:16:20 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/09 11:16:28 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//en esta funcion se busca la primera aparcion de la cadena (to_find) dentro de la cadena (str)
//sin buscar mas alla de la longitud aportada (len)*/
char	*ft_strnstr(char *str, char *to_find, unsigned int len)
{
	unsigned int		i;
	int					y;

	i = 0;
	y = 0;
	if (!(*to_find))							/*si aquello que buscamos es un nulo devolvemos la cadena str entera*/
		return (str);
	while ((str[i] != 0) && (i < len))			/*avanzamos por la cadena hasta el final o hasta la longitud dada*/
	{
		if (str[i] == to_find[y])				/*en caso de que algun caracter coincida*/
		{
			while (str[i + y] == to_find[y])	/*vamos comprobando hasta llegar al final de to_find o hasta que len haya sido sobrepasado*/
			{
				if ((y++ + i) > len)			/*en caso de sobrepasar len no contamos lo leido y devolvemos un nulo*/
					return (NULL);
				if (to_find[y] == 0)			/*en caso de comproba que realmente existe la cadena to_find en su totalidad y sin sobrepasar len devolvemos un puntero al inicio de la cadena*/
					return (&str[i]);
			}
			y = 0;								/*si no se encuentra la cadena entera to_find salimos de este loop y reiniciamos el contador de to_find para rehacer el proceso en caso de encontrarnos otra coincidencia */
		}
		i++;
	}
	return (NULL);								/*si no encontramos ninguna coincidencia devolvemos un puntero nulo*/
}
