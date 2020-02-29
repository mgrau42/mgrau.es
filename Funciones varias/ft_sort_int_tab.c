/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 09:43:49 by mgrau             #+#    #+#             */
/*   Updated: 2020/02/13 12:15:01 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size) // una simple funcion para reordenar una tabla de enteros
{
	int it;
	int et;
	int swap;

	it = 0;
	while (it < size)
	{
		et = 0;
		while (et < size)
		{
			if (tab[it] > tab[et])
			{
				swap = tab[it];
				tab[it] = tab[et];
				tab[et] = swap;
			}
			et++;
		}
		it++;
	}
}
