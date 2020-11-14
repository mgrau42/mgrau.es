/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:07:34 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/06 13:29:40 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	unsigned int		i;
	unsigned int		count;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	while (i < start)
		i++;
	while ((count < len) && (s[i] != '\0'))
	{
		str[count] = s[i];
		i++;
		count++;
	}
	str[count] = '\0';
	if ((int)start >= ft_strlen((char *)s))
		str[0] = '\0';
	return (str);
}
