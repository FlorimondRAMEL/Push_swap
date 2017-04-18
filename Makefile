# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: framel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 14:05:39 by framel            #+#    #+#              #
#    Updated: 2016/06/07 18:31:22 by framel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

IFLAG = -I.

LIB = ./libft/libft.a

CFLAGS = -Wall -Wextra -Werror

HEADER = push_swap.h

SRCS = push_swap ft_isdigitop ft_isstrint ft_argtoi ft_operate ft_sort\
	   ft_error ft_algo ft_operatend ft_operate_bis

SRCS := $(addsuffix .c, $(SRCS))

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIB) $(HEADER) $(OBJS)
	@$(CC) -o $(NAME) $(OBJS) $(LIB)
	@echo "$(NAME) is done"

$(LIB):
	make -C ./libft

%.o: %.c
	@$(CC) -o $@ $(CFLAGS) -c $? $(IFLAG)
	@echo "creating $@ from $?"

clean:
	@/bin/rm -f $(OBJS)
	@make -C ./libft clean
	@echo "cleaning $(NAME) objects files"

fclean: clean
	@/bin/rm -f $(NAME)
	@make -C ./libft fclean
	@echo "cleaning all $(NAME) files"

re: fclean all
	@echo "$(NAME) is reset"

.PHONY: all clean fclean re
