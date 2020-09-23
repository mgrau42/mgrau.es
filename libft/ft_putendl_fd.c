/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:03:33 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/15 11:02:27 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//escribe la cadena s con un salto de linea al final en el fd aportado
void	ft_putendl_fd(char *s, int fd)
{
	char *tmp;

	if ((s) && (fd))
	{
		tmp = s;
		while (*tmp)
			write(fd, tmp++, 1);
		write(fd, "\n", 1);
	}
}
