/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:23:02 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/16 09:56:55 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//añade el elemento "new" al final de la lista
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (!*lst)				/*se comprueba que la lista existe, si no es asi new es el comienzo de nuestra lista*/
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);	/*se usa tmp para contener el ultimo miembro de la lista, el cual se busca mediante la funcion lstlast*/
	tmp->next = new;		/*se añade new al final de la lista*/
}
