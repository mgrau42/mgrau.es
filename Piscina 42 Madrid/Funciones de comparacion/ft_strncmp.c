/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:39:51 by mgrau             #+#    #+#             */
/*   Updated: 2020/02/19 16:46:17 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n) // similar a la funcion strcmp pero con una busqueda acotada segun el numero n
{
	unsigned int i;

	i = 0;
	while ((s1[i] != 0 && i < n) || (s2[i] != 0 && i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
