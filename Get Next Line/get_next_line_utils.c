/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:45:53 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/03 12:28:18 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta serie de funciones ya viene explicadas en el ejercicio libft, son imitaciones de funciones de librerias estandar.
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	if ((!s1) || (!s2))
		return (NULL);
	str = (char *)malloc((ft_strlen((char *)s1)) + ft_strlen((char *)s2) + 1);
	if (str == NULL)
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(char *str, int c)
{
	int		i;
	char	*e;

	i = 0;
	if (!(str))
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			e = &str[i];
			return (e);
		}
		i++;
	}
	if (str[i] == c)
	{
		e = &str[i];
		return (e);
	}
	return (0);
}

char	*ft_strdup(const char *str1)
{
	char	*ptr;
	int		i;
	int		y;

	i = 0;
	y = 0;
	while (str1[y] != '\0')
		y++;
	ptr = (char *)malloc(y + 1);
	if (ptr == NULL)
		return (0);
	while (str1[i] != '\0')
	{
		ptr[i] = str1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	unsigned int		i;
	unsigned int		count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	while (i < start)
		i++;
	while ((count < len) && (s[i] != '\0'))
	{
		str[count] = s[i];
		i++;
		count++;
	}
	str[count] = '\0';
	if ((int)start >= ft_strlen((char *)s))
		str[0] = '\0';
	return (str);
}
