/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:30:55 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/16 09:57:35 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//crea una nueva lista que contiiene el parametro content
t_list	*ft_lstnew(void *content)
{
	t_list *newlst;

	if (!(newlst = (t_list *)malloc(sizeof(t_list))))	/*se asigna el espacio*/
		return (0);
	if (!content)
		newlst->content = NULL;
	else
		newlst->content = content;			/*se guarda content*/
	newlst->next = NULL;					/*se guarda null en next para hacer referencia a que es el final de nuestra lista*/
	return (newlst);					/*se devuelve la nueva lista*/
}
