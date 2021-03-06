/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:27:10 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/08 11:53:00 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//comprueba que el caracter (c) es parte de los caracteres ascii
int		ft_isascii(int c)
{
	if ((c < 0) || (c > 127))
		return (0);
	return (1);
}
