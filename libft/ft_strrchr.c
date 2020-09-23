/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:21:56 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/20 11:04:00 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//esta funcion busca la ultima instancia del caracter (c) en el string y
//devuelve un puntero a esa localizacion*/
char			*ft_strrchr(char *str, int c)
{
	int			i;

	if (!(str))				/*se comprueba la cadena*/
		return (NULL);
	i = ft_strlen(str);			/*se comprueba el largo de la cadena*/
	while (i >= 0)				/*se comprueba la cadena desde el final*/
	{
		if (str[i] == c)		/*si se encuentra c se devuelve esa posicion de la cadena*/
			return (&str[i]);
		i--;
	}
	return (NULL);
}
