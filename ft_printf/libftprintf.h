/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 10:27:07 by mgrau             #+#    #+#             */
/*   Updated: 2020/10/07 11:11:44 by mgrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct	s_tab
{
	char		*format;
	char		*fcopy;
	va_list		args;
	int			len;
	int			iserror;
}				t_tab;
typedef struct	s_flag
{
	char	specifier_flag;
	int		convertf_is_dot;
	int		convertf_is_minus;
	int		convertf_is_star;
	int		convertf_is_type;
	int		convertf_is_width;
	int		convertf_is_zero;
	char	specifier_list[10];
	int		precision;
	int		is_percent;
	int		field_width;
	int		isnull;
	int		int_is_neg;
}				t_flags;
char			*arg_treatment(t_tab	*t);
char			*general_converter(char *format, t_flags *flags, va_list args);
int				general_specifiers(t_tab	*t, t_flags *flags);
void			add_general (t_tab	*t, t_flags *flags, char *c);
t_flags			iniflags(t_flags flags);
char			*ft_itoa_base(unsigned long int value, int base, t_tab	*t);
char			*store_width(char *format, t_flags *flags, va_list args);
char			*store_precision(char *format, t_flags *flags, va_list args);
int				store_c(t_tab	*t, t_flags *flags, va_list args);
int				store_s(t_tab	*t, t_flags *flags);
int				store_p(t_tab	*t, t_flags *flags, va_list args);
void			store_i(t_tab	*t, t_flags *flags, va_list args);
int				store_u(t_tab	*t, t_flags *flags, va_list args);
int				store_x(t_tab	*t, t_flags *flags, va_list args);
int				store_percent(t_tab	*t, t_flags *flags);
int				mem_alloc(t_tab	*t, char *argstr, int add);
void			add_spaces (t_tab	*t, t_flags *flags, char *c);
void			add_tonum(t_tab	*t, t_flags *flags, char *c);
void			add_zero(t_tab	*t, t_flags *flags, char *c);
void			add_tonum_minus(t_tab	*t, t_flags *flags, char *c);
char			*ft_itoa_base1(unsigned long int value, int base, t_tab	*t);
char			*scommon(char *format, int *data);
void			print_space(long int add, int *len);
void			print_zero(long int add, int *len);
int				ft_printf(const char *formatstr, ...);
#endif
