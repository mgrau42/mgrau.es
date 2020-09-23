/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:07:34 by mgrau             #+#    #+#             */
/*   Updated: 2020/02/20 12:36:47 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find) // busqueda de cadena dentro de cadena
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		if (str[i] == to_find[y])
		{
			while (str[i + y] == to_find[y])
			{
				y++;
				if (to_find[y] == 0)
					return (str + i);
			}
			y = 0;
		}
		i++;
	}
	return (0);
}
