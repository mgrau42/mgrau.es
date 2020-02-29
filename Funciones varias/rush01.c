/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 20:23:03 by mgrau             #+#    #+#             */
/*   Updated: 2020/02/29 20:23:03 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c); // una simple funcion para practicar la impresiom, imprime un rectangulo con caracteres personalizados de x e y dimensiones

void	rush(int x, int y)
{
	int a;
	int b;

	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y && a != 1 && b != 1))
				ft_putchar('/');
			else if ((a == 1 && b == y) || (a == x && b == 1))
				ft_putchar('\\');
			else if (b == 1 || a == 1 || a == x || b == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			a++;
		}
		b++;
		ft_putchar('\n');
	}
}
