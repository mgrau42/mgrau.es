/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:28:09 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/16 09:57:09 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//se aplica la funcion f a cada uno de los miembros de la lista
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		(*f)(lst->content);		/*se aplica la funcion al contenido*/
		if (lst->next == NULL)		/*en caso de que este elemento se el final de la lista se detiene el programa*/
			return ;
		ft_lstiter(lst->next, f);	/*se aplica esta funcion al siguiente miembro de la lista*/
	}
}
