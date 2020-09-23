/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:08:38 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/21 11:17:33 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

//mide el largo del numero
static int		lennum(unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n >= 10) 							/*contamos cuantas veces podemos dividir el numero entre diez*/
	{
		n = n / 10;
		i++;
	}
	return (i + 1);								/*devolvemos el largo de nuestro numero*/
}

//Convierte un entero a una cadena de caracteres
char			*ft_itoa(int n)
{
	char				*str;
	unsigned int		len;
	unsigned int		nb;
	unsigned int		i;

	nb = (n < 0 ? -n : n);							/*en caso de que el numero sea negativo se convierte en positivo y se guarda en nb*/
	len = lennum(nb);							/*se usa lenum para comprobar el largo del entero en cuestion*/
	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * len + 1 + (n < 0 ? 1 : 0))))	/*se asigna el espacio de la cadena teniendo encuenta el largo del numero, el espacion requerido para el carcater nulo al final de ella y si el numero es negativo para el caracter "-"*/
		return (0);
	if (n < 0)								/*en caso de ser negativo guardamos primero el caracter "-"*/
	{
		str[i] = '-';
		len++;
	}
	i = len - 1;								/*preparamos el iterador para concordar con la penultima posicion del largo de la cadena*/
	while (nb >= 10)
	{
		str[i] = nb % 10 + '0';						/*vamos guardando el resto de la division de nuestro numero entre 10 mas '0' para guardarlo como caracter*/
		nb = nb / 10;							/*realizamos la division y continuando trabajando con el resultado hasta que nuestro numero sea menor que diez*/
		i--;
	}
	str[i] = nb % 10 + '0';							/*realizamos la opercacion una ultima vez y añadimos la terminacion nula de la cadena*/
	str[len] = '\0';
	return (str);								/*devolvemos nuestra cadena*/
}
