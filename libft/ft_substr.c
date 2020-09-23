/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:07:34 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/15 12:15:34 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres
// que proviene de la cadena pasada como argumento.
// Esta nueva cadena comienza en el índice ’start’ y tiene como tamaño máximo ’len’*/
char*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	unsigned int		i;
	unsigned int		count;

	i = 0;
	count = 0;
	if (!s)									/*se comprueba la cadena pasada como argumento*/
		return (NULL);
	if (!(str = (char *)malloc(len + 1)))	/*reservamos memoria teniendo en cuenta el + 1  para el final de la cadena*/
		return (NULL);
	while (i < start)						/*avanzamos el iterador hasta nuestro punto de inicio*/
		i++;
	while ((count < len) && (s[i] != '\0'))	/*copiamos el trozo de cadena deseada*/
	{
		str[count] = s[i];
		i++;
		count++;
	}
	str[count] = '\0';						/*se termina la cadena*/
	if ((int)start >= ft_strlen((char *)s))	/*en caso de que el start sobepase el largo de la cadena original*/
		str[0] = '\0';
	return (str);							/*se devuelve la nueva cadena*/
}
