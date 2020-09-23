/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:25:39 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/07 10:25:50 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*transforma el caracter (c) es una mayuscula*/
int		ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		return (c - 32);
	return (c);
}
