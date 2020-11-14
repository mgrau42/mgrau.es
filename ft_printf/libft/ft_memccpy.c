/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:29:48 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 13:23:34 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*cfound;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == ((unsigned char)c))
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
			cfound = &(((unsigned char *)dest)[i]);
			return (cfound);
		}
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (NULL);
}
