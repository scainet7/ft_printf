# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snino <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 17:57:14 by snino             #+#    #+#              #
#    Updated: 2022/12/05 20:57:41 by snino            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				:=	libftprintf.a

CC					:=	gcc

CFLAGS				:=	-Wall -Wextra -Werror

LIBFT_A				:=	libft.a

LIBF_DIR			:=	libft/

LIBFT				:=	$(addprefix $(LIBF_DIR), $(LIBFT_A))

SRCS				:=	ft_sort.c\
						ft_printf.c\
						ft_print_u.c\
						ft_print_c.c\
						ft_print_s.c\
						ft_print_p.c\
						ft_print_id.c\
						ft_print_xx.c\
						ft_trans_add.c\
						ft_trans_dec.c\
						ft_trans_hex.c\
						ft_print_proc.c\

HEADER				:=	ft_printf.h

OBJ_DIR				:=	obj

OBJ					:=	$(addprefix $(OBJ_DIR)/, $(patsubst %.c, %.o, $(SRCS)))

.PHONY				:	all clean fclean re

all					:	$(NAME)

$(NAME)				:	$(HEADER) $(OBJ)
						@make -C $(LIBF_DIR)
						ar rcs $(NAME) $?
						#$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME) $?

$(OBJ_DIR)/%.o		:  	%.c $(HEADER)
						@mkdir -p $(OBJ_DIR)
	 					$(CC) $(CFLAGS) -c $< -o $@

clean				:
						@rm -rf $(OBJ)
						@make -C $(LIBF_DIR) clean

fclean				: 	clean
						@$(RM) $(NAME)
						@rm -rf obj
						@make -C $(LIBF_DIR) fclean

re					: fclean all
