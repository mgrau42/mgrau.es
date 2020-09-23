/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:07:53 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/20 11:02:46 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//esta funcion busca la primera instancia del caracter (c)
//en el string y devuelve un puntero a esa localizacion*/
char	*ft_strchr(char *str, int c)
{

	if (!(str))				/*se comprueba el string aportado*/
		return (NULL);
	while (*str != '\0')	/*se recorre la cadena*/
	{
		if (*str == c)		/*en caso de encontrar el caracter se de vuelve esa posicion*/
			return (str);
		str++;
	}
	if (*str == c)			/*en caso de que el caracter a buscar sea nulo*/
		return (str);
	return (NULL);
}
