/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:25:43 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/14 13:35:24 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//borra y libera el elemento dado y sus elementos posteriores de la lista
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	if (!del)					/*se comprueba nuestra funcion de borrado*/
		return ;
	while (*lst != '\0')		/*se va recorriendo las posiciones de la lista hasta el final*/
	{
		del((*lst)->content);	/*se elimina el contenido de la posicion actual*/
		tmp = *lst;				/*se guarda una referencia a la direccion de memoria actual*/
		*lst = tmp->next;		/*nos movemos a la siguiente posicion, referenciada en next*/
		free(tmp);				/*ya una vez movido a la siguiente posicion liberamos el espacio de memoria que ya no vamos a usar mas*/
	}
	*lst = 0;					/*se añade un nulo en la posicion de la lista donde terminemos de borrar*/
}
