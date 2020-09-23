/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:34:41 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/08 11:34:21 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copia n caracteres de la porcion de memoria de src a dest
void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if ((src == NULL) && (dest == NULL))					/*se comprueban los parametros pasados*/
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];		/* se realiza la copia*/
		i++;
	}
	return (dest);
}
