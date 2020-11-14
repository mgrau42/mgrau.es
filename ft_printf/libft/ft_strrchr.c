/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:21:56 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 13:28:55 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(char *str, int c)
{
	int			i;

	if (!(str))
		return (NULL);
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
