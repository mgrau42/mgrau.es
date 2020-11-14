/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:37:10 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 13:24:14 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*csrc;
	unsigned char	*cdest;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	i = 0;
	if ((src == NULL) && (dest == NULL))
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else
		while (n--)
			*(cdest + n) = *(csrc + n);
	return (dest);
}
