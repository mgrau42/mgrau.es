/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:23:59 by mgrau             #+#    #+#             */
/*   Updated: 2020/02/20 15:30:39 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src) //una funcion que emula a la funcion de concatenacion de cadenas strcat de la libreria string.h de linux
{
	int		i;
	int		c;
	int		b;

	i = 0;
	b = 0;
	c = 0;
	while (dest[i] != 0 || src[b] != 0)
	{
		if (dest[i] != 0)
			++i;
		if (src[b] != 0)
			++b;
	}
	dest[i + b] = 0;
	while ((src[c] != 0))
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = 0;
	return (dest);
}
