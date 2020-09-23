/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:38:39 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/06 13:39:13 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//esta funcion copia un caracter (c)  a los primeros bytes (n) de la cadena (str)
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)								/* se cicla y se va copiando el caracter*/
	{
		((char *)str)[i] = ((unsigned char)c);
		i++;
	}
	return (str);
}
