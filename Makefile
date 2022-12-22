# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 14:52:59 by mregh             #+#    #+#              #
#    Updated: 2022/12/22 16:23:34 by mregh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_isalpha.c	\
				ft_isdigit.c	\
				ft_isalnum.c	\
				ft_isascii.c	\
				ft_isprint.c	\
				ft_strlen.c		\
				ft_memset.c		\
				ft_bzero.c		\
				ft_memcpy.c		\
				ft_memmove.c	\
				ft_strlcpy.c	\
				ft_strlcat.c	\
				ft_toupper.c	\
				ft_tolower.c	\
				ft_strchr.c		\
				ft_strrchr.c	\
				ft_strncmp.c	\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_strnstr.c	\
				ft_atoi.c		\
				ft_calloc.c		\
				ft_strdup.c		\
				ft_substr.c		\
				ft_strjoin.c	\
				ft_strtrim.c	\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\

OBJECTS		=	$(SRC:.c=.o)

CC 			=	gcc
RM			=	rm -f
CFLAGS		=	-Wall -Werror -Wextra

NAME		=	libft.a

all:		$(NAME)

$(NAME):	$(OBJECTS)
	ar -rsc $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all