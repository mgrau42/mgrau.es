/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:20:09 by mgrau             #+#    #+#             */
/*   Updated: 2020/02/20 12:29:27 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size) // una funcion que emula a la funcion de concatenacion de cadenas strlcat de la libreria string.h de linux
{
	unsigned int		i;
	unsigned int		b;
	unsigned int		c;

	i = ft_strlen(dest);
	b = ft_strlen(src);
	b = b + i;
	c = 0;
	if (i > size)
		b = b + size - i;
	while (src[c] != 0 && (i + 1) < size)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = 0;
	return (b);
}

unsigned int	ft_strlen(char *str) // funicion que mide el largo de una cadena de caracteres
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
