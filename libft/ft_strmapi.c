/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:13:46 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/15 11:08:01 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//aplica la funcion f a cada caracter del string s creando una nueva cadena
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	char				*buff;
	unsigned int		i;

	i = 0;
	if ((!s) || (!f))
		return (NULL);
	if (!(str = (char *)malloc(ft_strlen((char *)s) + 1)))	/*se asigna memoria*/
		return (ft_strdup(""));
	buff = (char *)s;										/*se guarda una copia de la direccion inicial*/
	while (s[i] != '\0')
	{
		str[i] = f(i, buff[i]);								/*se aplica la funcion y se guarda en la nueva cadena*/
		i++;
	}
	str[i] = '\0';
	return (str);
}
