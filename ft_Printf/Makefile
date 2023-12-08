# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 18:03:47 by mlefort           #+#    #+#              #
#    Updated: 2023/12/08 15:13:58 by mlefort          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

#################################

SRC_FILES = ft_printf.c \
			ft_printf_utils.c

OBJS_FILES = ${SRC_FILES:.c=.o}

#################################
all: ${NAME}

${NAME} : ${OBJS_FILES}
			ar rcs ${NAME} ${OBJS_FILES}

clean:
		rm -f *.o

fclean: clean

				rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
