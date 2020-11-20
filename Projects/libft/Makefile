# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 12:45:40 by fspano            #+#    #+#              #
#    Updated: 2020/11/20 12:45:40 by fspano           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#SRCS		= memset bzero memcpy memccpy memmove memchr memcmp strlen isalpha
#isdigit isalnum isascii isprint toupper tolower srtchr strrchr
#strlcat strnstr
#calloc
#ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_putchar_fd
#ft_putstr_fd ft_putendl_fd ft_putnbr_fd

#BONUS

#ft_lstnew ft_lstadd_front ft_lstsize ft_lstadd_back ft_lstdelone ft_lstclear
#ft_lstiter ft_lstmap

SRCS		= ft_atoi.c ft_strdup.c ft_strlcpy.c ft_strncmp.c

OBJS		= $(SRC:.c=.o)

NAME		= libft.a

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror



LDFLAGS		= -L.
LDLIBS		= -lft
INC = ./inc/
${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib $(NAME)
%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)




all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean clean