# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgrau <mgrau@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/23 11:17:40 by mgrau             #+#    #+#              #
#    Updated: 2020/02/26 22:02:03 by mgrau            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDES = 	-I libft/libft.h
LIB_DIR =	srcs/libft/
LIBFT_A =	libft.a

SOURCE = ft_itoa_base.c ft_printf.c pf_add_spaces.c\
pf_arg_treatment.c pf_general_converter.c pf_general_specifiers.c pf_iniflags.c\
pf_store_c.c pf_store_precision.c pf_store_width.c pf_store_s.c pf_store_u.c\
pf_add_general.c ft_itoa_base.c pf_store_p.c pf_store_i.c pf_store_x.c\
pf_add_zeroes.c pf_store_percent.c pf_scommon.c
BSOURCE = ft_lstadd_back.c ft_lstadd_front.c\
ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJS = $(SOURCE:.c=.o)
BOBJS = $(BSOURCE:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc


$(NAME): $(OBJS)
	make -C ./libft
	ar -rcs $(NAME) *.o
all: $(NAME)

bonus: $(NAME)

.PHONY: clean fclean re bonus all

clean:
	rm -rf *.o
	rm -rf ./libft/*.o
fclean: clean
	rm -rf $(NAME)
re: fclean all
