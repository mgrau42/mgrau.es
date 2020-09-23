/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:06:14 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/20 10:48:08 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

//escribe el entero n en el fd aportado
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int i;

	i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);			/*en caso de ser un numero negativo se escribe primero el caracter "-" y se pasa la copia a positivo*/
		i = n * -1;
	}
	else
		i = n;
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);		/*si el numero es mayor a diez, se divide entre 10 y vuelve a entrar en esta funcion*/
	ft_putchar_fd(i % 10 + 48, fd);		/*se imprime el resto de la division del numero en cuestion entre 10*/
}
