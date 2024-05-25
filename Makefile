# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nosman <nosman@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 11:33:45 by myousaf           #+#    #+#              #
#    Updated: 2024/05/22 09:49:30 by nosman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -g3 -O2 -fsanitize=address
LDFLAGS	=	-g3 -O2 -fsanitize=address
ARCHIVE	=	./libft/libft.a
SRC		=	ft_string_check.c \
			parsing.c \
			parsing_utils.c \
			string_check_utils.c \
			to_linked_list.c \
			stack_operations_swap.c \
			stack_operations_push.c \
			stack_operations_rotate.c \
			stack_operations_rr.c \
			sort_two_three.c \
			sort_four_more.c \
			sort_list.c \
			sort_utils.c \
			sort_five.c \
			sort_till_100.c \
			push_swap.c

REMOVE	=	a.out \
			a.out.dSYM

EXE		=	turk

TEST	=	ft_turk.c \
			ft_turk_utils.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ) $(ARCHIVE)
	$(CC) $(CFLAGS) $(OBJ) $(ARCHIVE) -o $(NAME)

all:$(NAME)

$(ARCHIVE):
	@make -s -C libft

clean:
	make clean -s -C libft
	@$(RM) $(OBJ)

fclean: clean
	make fclean -s -C libft
	@$(RM) -fr $(NAME) $(REMOVE)

re: fclean all

debug: all
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJ) $(ARCHIVE) -o $(NAME)

test:
	$(CC) $(CFLAGS) $(LDFLAGS) $(TEST) -o $(EXE)

.PHONY: all clean fclean re bonus debug
