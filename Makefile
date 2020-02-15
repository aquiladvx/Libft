# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/23 20:48:08 by dlima-ra          #+#    #+#              #
#    Updated: 2020/02/12 13:47:40 by dlima-ra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC		= ft_strlcat.c ft_strlen.c ft_tolower.c ft_toupper.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strmapi.c

FILEBONUS=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRC:.c=.o}

OBJSBONUS=$(FILEBONUS:.c=.o)

RM		= rm -f

CCFLAGS = -Wall -Wextra -Werror -I./ -c

$(NAME)	: ${SRC} libft.h
		gcc ${CCFLAGS} ${SRC}
		ar rc $(NAME) ${OBJS}
		ranlib $(NAME)

all		: $(NAME)

bonus:
	gcc $(CCFLAGS) -c $(FILEBONUS)
	ar rc $(NAME) $(OBJSBONUS)
	ranlib $(NAME)

clean	:
	${RM} ${NAME}

fclean	:
	${RM} $(NAME)

re		: fclean all

.PHONY: all clean fclean re
