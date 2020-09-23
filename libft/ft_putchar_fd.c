/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:02:47 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/14 13:09:18 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

//esta funcion escribe un caracter en el fd aportado
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
