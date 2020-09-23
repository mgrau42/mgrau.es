/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:28:56 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/14 13:16:34 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// se devuelve el ultimo elemento de la lista
t_list	*ft_lstlast(t_list *lst)
{
	t_list *tmp;

	tmp = lst;
	if (lst)
		while (tmp->next != '\0')		/* se recorre la lista hasta su ultimo elemento*/
			tmp = tmp->next;
	return (tmp); 					/* se devuelve la referencia a este ultimo elemento*/
}
