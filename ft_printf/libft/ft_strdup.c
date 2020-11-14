/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:10:19 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 13:25:30 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*ptr;
	int		i;
	int		y;

	i = 0;
	y = 0;
	while (str1[y] != '\0')
		y++;
	ptr = (char *)malloc(y + 1);
	if (ptr == NULL)
		return (NULL);
	while (str1[i] != '\0')
	{
		ptr[i] = str1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
