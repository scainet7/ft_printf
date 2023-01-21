# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snino <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 17:57:14 by snino             #+#    #+#              #
#    Updated: 2021/11/07 18:08:37 by snino            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIBFT_DIR	= libft

LIBFT		= $(LIBFT_DIR)/libft.a

SRCS		= ft_printf.c		ft_sort.c		ft_print_c.c	ft_print_s.c\
			  ft_print_p.c		ft_trans_add.c	ft_print_id.c	ft_print_u.c\
			  ft_trans_dec.c	ft_print_xx.c	ft_trans_hex.c	ft_print_proc.c

HEADER		= ft_printf.h

OBJ			= $(patsubst %.c, %.o, $(SRCS))

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

.PHONY:		all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ)
		@$(MAKE) -C $(LIBFT_DIR) all
		@$(MAKE) bonus -C $(LIBFT_DIR) 
		@cp $(LIBFT) $(NAME)
		@ar rcs $(NAME) $(OBJ) $?

%.o		: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

clean	:
		@$(MAKE) -C $(LIBFT_DIR) clean
		@rm -f $(OBJ)

fclean	: clean
		@$(MAKE) -C $(LIBFT_DIR) fclean
		@rm -f $(NAME) 

re		: fclean all
