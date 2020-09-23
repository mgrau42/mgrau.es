/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:43:09 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/09 13:08:27 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Comprueba si el caracter que le estamos aportando en este momento se encuentra en la cadena set
int		set_search(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

// Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres que es
// una copia de ’s1’, sin los caracteres indicados en el ’set’ al principio y al final de la cadena de caracteres*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*strstart;
	char	*strend;
	char	*str;

	i = 0;
	if ((!s1) || (!set))									/*se comprueban los parametros pasados*/
		return (NULL);
	while ((s1[i] != '\0') && (set_search(s1[i], set)))		/*se recorre la cadena hasta la posicion sin los caracteres indicados por set*/
		i++;
	if (i == (ft_strlen((char *)s1)))						/*en caso de que se haya recorrido la cadena entera y sea enteramente caracteres que se encuentran en set se devuelve un puntero nulo*/
		return (ft_strdup(""));
	strstart = (char *)&s1[i];								/*guardamos la posicion inicial del trozo que nos interesa*/
	i = (ft_strlen((char *)s1) - 1);						/*movemos el iterador al final de la cadena*/
	while ((i >= 0) && (set_search(s1[i], set)))			/*realizamos la misma operacion desde el final*/
		i--;
	if ((!*s1) || ((strend = (char *)&s1[i]) == strstart))	/* guardamos la posicion final en strend y comprobamos que es distinta de la inicial*/
		size = 2;											/*en caso de que sean iguales el tamaño de la compia es igual a 2, un caracter mas el caracter nulo*/
	else													/*en caso alternativo calculamos el largo de la cadena*/
		size = strend - strstart + 2;
	if (!(str = malloc(sizeof(char) * size)))				/*se asigna la memoria calculada en pasos anteriores*/
		return (NULL);
	ft_strlcpy(str, strstart, size);						/*se copia la cadena requerida usando el puntero al comienzo y la medida de la cadena*/
	return (str);											/*se devuelve la cadena*/
}
