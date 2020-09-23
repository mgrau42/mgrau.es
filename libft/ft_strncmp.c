/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:15:15 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/07 10:15:22 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//esta funcion compara dos cadenas hasta el final de alguna de ellas o hasta (n) bytes
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] != 0 && i < n) || (s2[i] != 0 && i < n))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i]) 			/*en caso de alguna diferencia se devuelve un valor numerico representativo de la misma*/
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0); 									/*si no existen diferencias en los bytes comparados se devuelve 0*/
}
