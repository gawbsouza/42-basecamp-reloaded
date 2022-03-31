# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 04:47:15 by gasouza           #+#    #+#              #
#    Updated: 2022/03/31 05:18:53 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c
INCS_D	= includes
SRCS_D	= srcs
CC		= gcc
AR		= ar -rc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

OBS 	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBS)
	$(AR) $@ $^

%.o: $(SRCS_D)/%.c
	$(CC) $(CFLAGS) -I$(INCS_D) -o $@ -c $< 

clean :
	$(RM) $(OBS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re