/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:54:44 by mgrau             #+#    #+#             */
/*   Updated: 2020/02/18 19:49:35 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void if_beforeweird(char *str, int i);

char	*ft_strcapitalize(char *str) //una funcion por la cual se consigue poner en mayusculas el inicio de cada palabra, entendiendo la palabra como una sucecion de alfanumericos
{
	int i;

	if ((str[0] >= 97) && (str[0] <= 122)) // un caso especial para la primera posicion ya que no es precedida por ningun caracter
	{
		str[0] = str[0] - 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if_beforeweird(str, i); // Se ponen en mayusculas aquellas letras minusculas precedidas por algun caracter no alfanumerico
		if ((((str[i - 1] >= 65) && (str[i - 1] <= 90)) ||\
		((str[i - 1] >= 48) && (str[i - 1] <= 57)) ||\
		((str[i - 1] >= 97) && (str[i - 1] <= 122))) &&\
		((str[i] >= 65) && (str[i] <= 90))) // se ponen en minusculas aquellas letras mayusculas en mitad de las palabras
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

void	if_beforeweird(char *str, int i)
{
	if ((str[i] >= 97) && (str[i] <= 122) && \
		(((str[i - 1] < 65) || (str[i - 1] > 90)) \
		&& ((str[i - 1] < 97) || (str[i - 1] > 122))\
		&& ((str[i - 1] < 48) || (str[i - 1] > 57))))
	{
		str[i] = str[i] - 32;
	}
}
