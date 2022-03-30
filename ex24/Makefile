# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 04:47:15 by gasouza           #+#    #+#              #
#    Updated: 2022/03/30 05:26:22 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c
INCS_D	= ./includes
SRCS_D	= ./srcs
CC		= gcc
AR		= ar -rc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

OBJS	= $(subst .c,.o,$(addprefix $(SRCS_D)/,$(SRCS)))

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS) ; $(AR) $@ $^

$(SRCS_D)/ft_putchar.o \
$(SRCS_D)/ft_putstr.o : $(INCS_D)/ft_putchar.h

$(OBJS): ; $(CC) $(CFLAGS) -c $(@:.o=.c) -o $@

.PHONY: clean
clean: ; $(RM) $(OBJS)

.PHONY: fclean
fclean: clean ; $(RM) $(NAME)

.PHONY: re
re: fclean $(NAME)
