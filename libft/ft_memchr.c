/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:31:07 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/23 09:45:21 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// busca en los primeros bytes de memoria (n)
// la primera incidencia del caracater (c) y devuelve un puntero a ese espacio de memoria
void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*cfound;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == ((unsigned char)c))	/*iteramos, en caso de coincidencia devolvemos un puntero al primer caracter coincidente*/
		{
			cfound = &(((unsigned char *)src)[i]);
			return (cfound);
		}
		i++;
	}
	return (NULL);							/*en caso de no encontrar ninguna coincidencia devolvemos un nulo*/
}
