/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:27:08 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/14 13:27:33 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// se libera la memoria de un solo elemento de la lista
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)				/*si el elemento existe*/
	{
		del(lst->content);		/*eliminamos su contenido*/
		free(lst);			/*liberamos la memoria*/
		lst = NULL;			/*finalmente el puntero al elemento se fija como nulo*/
	}
}
