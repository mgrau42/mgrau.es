/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:18:46 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/15 11:39:42 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta funcion convierte una cadena en un entero
int	ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	nb = 0;
	i = 0;
	neg = 1;
	while ((str[i] == ' ') || (str[i] == '\t')\
	|| (str[i] == '\n') || (str[i] == '\v') ||\
	(str[i] == '\f') || (str[i] == '\r'))		/*nos saltamos todos los espacio hasta el primer caracter que nos interesa*/
		i++;
	if (str[i] == 45)				/*en caso que este sea "-" modificamos nuestro contador de negativo*/
	{
		neg = neg * -1;
		i++;
	}
	else if (str[i] == 43)				/*si nos encontramos un "+" avanzamos*/
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))	/*una vez encontrados los numeros realizamos la conversion a entero*/
		nb = (nb * 10) + (str[i++] - 48);
	return (nb * neg);				/*devolvemos el numero entero multiplicado por el contador de negativos que determina si es positivo o negativo*/
}
