# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malo <malo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 14:09:58 by mlefort           #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2023/11/30 15:00:46 by mlefort          ###   ########.fr        #
=======
#    Updated: 2023/11/25 21:05:20 by malo             ###   ########.fr        #
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRC_FILES	=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c

<<<<<<< HEAD
BONUS_FILES	=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c
					
OBJ_FILES	= $(SRC_FILES:.c=.o)
BONUS_OBJ_FILES	= $(BONUS_FILES:.c=.o)
=======
BONUS_FILES	=	ft_lstnew.c
					
OBJ_FILES	= $(SRC_FILES:.c=.o)
BONUS_OBJ_FILES	= $(SRC_FILES:.c=.o)
>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a

all: ${NAME}

${NAME}: ${OBJ_FILES}
		ar rcs ${NAME} ${OBJ_FILES}

<<<<<<< HEAD
bonus : ${BONUS_OBJ_FILES} ${OBJ_FILES}
		ar rcs ${NAME} ${BONUS_OBJ_FILES} ${OBJ_FILES}
=======
bonus : ${BONUS_OBJ_FILES}
		ar rcs ${NAME} ${BONUS_OBJ_FILES}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC_FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJ_FILES)

>>>>>>> fbe285ebca3119bb4f8769b5e9aa7408e734fc1a

clean:
	rm -f ${OBJ_FILES} ${BONUS_OBJ_FILES}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re