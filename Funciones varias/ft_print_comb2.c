/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:39:42 by mgrau             #+#    #+#             */
/*   Updated: 2020/02/10 17:25:25 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void) // una funcion para practicar la impresion, muestra todas las combinaciones posibles de dos números entre 0 y 99, en orden creciente.
{
	int		a;
	int		b;
	char	c[2];

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c[0] = a / 10 + 48;
			c[1] = a % 10 + 48;
			write(1, &c, 2) && write(1, " ", 1);
			c[0] = b / 10 + 48;
			c[1] = b % 10 + 48;
			write(1, &c, 2);
			if (a != 98)
			{
				write(1, &", ", 2);
			}
			++b;
		}
		++a;
	}
}
