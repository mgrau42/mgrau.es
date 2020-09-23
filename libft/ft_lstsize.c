/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:33:01 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/14 12:33:50 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//devuelve el tamaño de la lista
int	ft_lstsize(t_list *lst)
{
	int			i;
	t_list		*tmp;

	i = 0;
	tmp = lst;
	while (tmp != '\0')			/*se itera y se cuentan los miembros de la lista hasta que nos encontremos el final marcado por un nulo*/
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
