/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 09:34:22 by mgrau             #+#    #+#             */
/*   Updated: 2020/07/27 10:30:00 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

//Determina cuan grande es el array de cadenas a usar en ft_split
static int		matrixl(char const *s, char c)
{
	int i;
	int len;

	len = 0;
	i = 0;
	if (*s == '\0')
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			i = 0;
		else if (i == 0)
		{
			i = 1;
			len++;
		}
		s++;
	}
	return (len);
}

//Determina el largo de la cadena de caracteres
static int		strsplen(const char *s, char c, int i)
{
	int len;

	len = 0;
	while ((s[i] != c) && (s[i] != '\0'))
	{
		len++;
		i++;
	}
	return (len);
}

//funcion para liberar memoria en caso de algun error al asignarla
static char		**bigfree(char **m, int e)
{
	while (e)
		free(m[e--]);
	free(m);
	return (NULL);
}

// devuelve un array de cadenas obtenidas a partir de cortar s usando el caracter c como delimitador
char			**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	int		e;
	int		g;

	if (!s)
		return (NULL);
	i = 0;
	e = 0;
	if (!(matrix = (char **)malloc((((matrixl(s, c)) + 1) * sizeof(char *)))))		/*adjudicamos la memoria a nuestro array*/
		return (0);
	while ((s[i] != '\0') && (e < (matrixl(s, c))))
	{
		g = 0;
		while (s[i] == c)
			i++;
		if (!(matrix[e] = (char *)malloc(sizeof(char) * strsplen(s, c, i) + 1)))	/*se adjudica la memoria de la cadena de caracteres*/
			return (bigfree(matrix, e));
		while ((s[i] != '\0') && (s[i] != c))
			matrix[e][g++] = s[i++];						/*se copia la cadena*/
		matrix[e++][g] = '\0';
	}
	matrix[e] = 0;										/*se termina el array*/
	return (matrix);									/*se devuelve el array*/
}
