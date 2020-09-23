/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:22:12 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/20 11:44:22 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//una funcion similar a malloc pero esta ademas pone el espacio asignado a 0
void	*ft_calloc(size_t num, size_t size)
{
	void	*array;
	int		i;

	i = 0;
	if ((num <= 0) || (size <= 0))		/*se comprueban los parametros pasados*/
		return (ft_strdup(""));
	if (!(array = malloc(num * size)))	/*se realiza un malloc usando el numero de elementos a asignar (num) y el tamaño de dichos elementos (size)*/
		return (ft_strdup(""));
	while (i < ((int)num * (int)size))	/*se pone el espacio asignado a 0*/
		((char*)array)[i++] = 0;
	return (array);
}
