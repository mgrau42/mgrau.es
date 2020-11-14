/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:46:44 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 13:25:20 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	char	*c;
	char	*temp;

	c = malloc(ft_strlen(dest) + ft_strlen(src) + 1);
	temp = c;
	while (*dest)
	{
		*temp = *dest;
		temp++;
		dest++;
	}
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (c);
}
