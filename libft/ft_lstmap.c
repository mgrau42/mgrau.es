/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:29:43 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/21 13:36:20 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// esta es una funcion para vaciar la memoria que se usara en lstmap en caso de que en esta hubiera algun error
static t_list		*ft_lstclearm(t_list **t, void (*d)(void *))
{
	t_list *tmp;

	if (!d)
		return (NULL);
	while (*t != '\0')
	{
		d((*t)->content);
		tmp = *t;
		*t = tmp->next;
		free(tmp);
	}
	*t = 0;
	return (NULL);
}

//esta funcion crea una nueva lista a partir de una lista aportada a la que se aplica la funcion f a cada elemento
t_list				*ft_lstmap(t_list *t, void *(*f)(void *), void (*d)(void *))
{
	t_list	*newelem;

	if (t == NULL || f == NULL)
		return (NULL);
	newelem = (t_list *)malloc(sizeof(t_list));		/*se asigna el espacio para el nuevo elemento de la lista*/
	if (!newelem)
		return (ft_lstclearm(&newelem, d));
	newelem->content = f(t->content);				/*se guarda el resultado de aplicar la funcion en el contenido de la lista original*/
	if (t->next)
	{
		newelem->next = ft_lstmap(t->next, f, d);	/*se aplica esta funcion al siguiente elemento de la lista*/
		if (newelem->next == NULL)
			return (ft_lstclearm(&newelem, d));
	}
	else
		newelem->next = NULL;						/*en caso de que el siguiente elemento de la lista original sea el ultimo terminamos nuestra nueva lista*/
	return (newelem);								/*devolvemos nuestra nueva lista*/
}
