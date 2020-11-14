/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:31:07 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 13:29:07 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*cfound;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == ((unsigned char)c))
		{
			cfound = &(((unsigned char *)src)[i]);
			return (cfound);
		}
		i++;
	}
	return (NULL);
}
