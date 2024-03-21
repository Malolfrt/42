# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 17:17:50 by mlefort           #+#    #+#              #
#    Updated: 2024/03/01 11:24:10 by mlefort          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= pipex

CC		= clang
CFLAGS	= -Wall -Werror -Wextra -g3 -Ilibft

SRC_PATH	= src/
OBJ_PATH	= src/obj/
LIBFT_PATH	= libft/

SRC_FILES	= 	pipex.c \
				parsing.c \
				parsing_utils.c

OBJ_FILES = $(SRC_FILES:.c=.o)
OBJS = $(addprefix $(OBJ_PATH),$(OBJ_FILES))

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(NAME): $(OBJS) $(LIBFT_PATH)libft.a
	$(CC) $(OBJS) -L$(LIBFT_PATH) -lft -o $(NAME)

$(LIBFT_PATH)libft.a:
	$(MAKE) -C $(LIBFT_PATH)

clean:
	rm -rf *.o $(OBJ_PATH)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean:	clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
