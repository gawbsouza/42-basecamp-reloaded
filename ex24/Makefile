# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 04:47:15 by gasouza           #+#    #+#              #
#    Updated: 2022/03/30 05:14:20 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
FUNCS	= ft_putchar ft_putstr ft_strlen ft_strcmp ft_swap
INC_DIR	= ./includes
SRC_DIR	= ./srcs
CC		= gcc
AR		= ar -rc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

OBJS	= $(addsuffix .o,$(addprefix $(SRC_DIR)/,$(FUNCS)))

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS) ; $(AR) $@ $^

$(SRC_DIR)/ft_putchar.o \
$(SRC_DIR)/ft_putstr.o : $(INC_DIR)/ft_putchar.h

$(OBJS): ; $(CC) $(CFLAGS) -c $(@:.o=.c) -o $@

.PHONY: clean
clean: ; $(RM) $(OBJS)

.PHONY: fclean
fclean: clean ; $(RM) $(NAME)

.PHONY: re
re: fclean $(NAME)
