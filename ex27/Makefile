# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 21:20:38 by gasouza           #+#    #+#              #
#    Updated: 2022/03/31 21:20:44 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
FUNCS	= main.c ft_putchar.c ft_putstr.c
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f
OBS		= $(FUNCS:.c=.o)

all: $(NAME)

$(NAME): $(OBS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: ; $(RM) $(OBS)
fclean: clean ; $(RM) $(NAME)

.PHONY: all clean fclean
