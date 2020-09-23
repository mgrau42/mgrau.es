/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:44:15 by mgrau             #+#    #+#             */
/*   Updated: 2020/02/20 10:58:17 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb) //una funcion que emula a la funcion de concatenacion de cadenas strncat de la libreria string.h de linux
{
	int					i;
	unsigned int		b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		++i;
	while ((b < nb && src[b] != '\0'))
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = 0;
	return (dest);
}
