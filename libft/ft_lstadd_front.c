/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:24:47 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/14 12:24:59 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// se añade el elemento "new" al principio de la lista
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = alst[0];	/*se añade la posicion inicial de la lista al puntero next de el elemento new*/
	alst[0] = new;		/*new se determina como la nueva posicion inicial de la lista*/
}
