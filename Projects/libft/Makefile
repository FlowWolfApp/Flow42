# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 12:45:40 by fspano            #+#    #+#              #
#    Updated: 2020/11/27 11:25:13 by fspano           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#SRCS		= ft_itoa ft_strmapi ft_putchar_fd
#ft_putstr_fd ft_putendl_fd ft_putnbr_fd

#BONUS

#ft_lstnew ft_lstadd_front ft_lstsize ft_lstadd_back ft_lstdelone ft_lstclear
#ft_lstiter ft_lstmap

SRCS		= ft_atoi.c ft_strdup.c ft_strlcpy.c ft_strncmp.c ft_strlen.c	\
ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c	\
ft_memcmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strnstr.c\
ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

NAME		= libft.a

OBJS		= $(SRCS:.c=.o)

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

AR			= ar -rcs

INC = .
${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			ranlib $(NAME)

.c.o:
			${CC} ${CFLAGS} -c -fPIC $< -o ${<:.c=.o}

all:		${NAME}

so:			${NAME}
			ar -x ${NAME}
			${CC} -shared *.o -o libft.so

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re