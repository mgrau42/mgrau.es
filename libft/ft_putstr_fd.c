/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:06:59 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/15 11:02:03 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// esta funcion escribe la cadena s en el fd aportado
void	ft_putstr_fd(char *s, int fd)
{
	char *tmp;

	if ((s) && (fd))
	{
		tmp = s;
		while (*tmp)
			write(fd, tmp++, 1);
	}
}
