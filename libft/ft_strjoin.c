/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:59:19 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/20 11:35:21 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Reserva memoria (con malloc(3)) y devuelve la nueva cadena de caracteres
//que resulta de laconcatenación de ’s1’ y ’s2’*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	if ((!s1) || (!s2))								/*se comprueban las cadenas*/
		return (NULL);
	str = (char *)malloc((ft_strlen((char *)s1)) + ft_strlen((char *)s2) + 1);	/*se asigna la memoria, el largo de las cadenas + 1*/
	if (str == NULL)
		return (NULL);
	while (*s1)									/*se añade la primera cadena*/
		str[i++] = *s1++;
	while (*s2)									/*se añade la segunda cadena*/
		str[i++] = *s2++;
	str[i] = '\0';									/*se termina la cadena*/
	return (str);
}
