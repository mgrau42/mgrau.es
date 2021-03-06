/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:27:35 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/06 13:28:02 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//comprueba que el caracter (c) es un digito
int		ft_isdigit(int c)
{
	if ((c < 48) || (c > 57))
		return (0);
	return (1);
}
