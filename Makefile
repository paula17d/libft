# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 22:20:14 by pdrettas          #+#    #+#              #
#    Updated: 2024/10/26 11:49:37 by pdrettas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a
HEADER = libft.h

# Rules
all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all


# phony rein
# edit wildcard -> put all files
# francinette didnt work bc of SRC when listing all the files. (works with wildcard)