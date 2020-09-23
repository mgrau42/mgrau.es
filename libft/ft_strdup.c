/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:10:19 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/08 13:25:40 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//asigna memoria y devuelve un duplicado de la cadena aportada
char	*ft_strdup(const char *str1)
{
	char	*ptr;
	int		i;

	i = 0;
	while (str1[i] != '\0')
		i++;
	if (!(ptr = (char *)malloc(i + 1)))	/*se asigna memoria*/
		return (NULL);
	i = 0;
	while (str1[i] != '\0')				/*se copia la cadena*/
	{
		ptr[i] = str1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
