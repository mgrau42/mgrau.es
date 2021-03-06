/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:26:43 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/06 13:26:57 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//comprueba que el caracter (c) es un alfabetico
int		ft_isalpha(int c)
{
	if (((c < 65) || (c > 90)) && ((c < 97) \
	|| (c > 122)))
		return (0);
	return (1);
}
