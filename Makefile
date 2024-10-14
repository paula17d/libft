# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 22:20:14 by pdrettas          #+#    #+#              #
#    Updated: 2024/10/14 20:07:21 by pdrettas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libft.a                  # Name of the static library
CC = gcc                        # Compiler
CFLAGS = -Wall -Wextra -Werror  # Compilation flags (warnings, extra checks, treat warnings as errors)
SRCS = ft_strchr.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c \
       ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c  # Source files
OBJS = $(SRCS:.c=.o)            # Object files, corresponding to source files
RM = rm -f                      # Command to remove files

# Default rule, builds the static library
all: $(NAME)

# Create the static library from object files
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile .c files into .o object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	$(RM) $(OBJS)

# Clean object files and the static library
fclean: clean
	$(RM) $(NAME)

# Rebuild everything from scratch
re: fclean all

# Phony targets
.PHONY: all clean fclean re
