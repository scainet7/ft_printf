# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snino <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 16:23:18 by snino             #+#    #+#              #
#    Updated: 2021/11/07 18:38:19 by snino            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_isalnum.c			ft_isprint.c		ft_memcmp.c\
			 	ft_putchar_fd.c			ft_split.c			ft_strlcat.c\
			 	ft_strncmp.c			ft_substr.c 		ft_atoi.c\
			 	ft_isalpha.c			ft_itoa.c			ft_memcpy.c\
			 	ft_putendl_fd.c			ft_strchr.c			ft_strlcpy.c\
			 	ft_strnstr.c			ft_tolower.c		ft_bzero.c\
			 	ft_isascii.c			ft_striteri.c		ft_memmove.c\
			 	ft_putnbr_fd.c			ft_strdup.c			ft_strlen.c\
				ft_strrchr.c			ft_toupper.c		ft_calloc.c\
				ft_isdigit.c			ft_memchr.c			ft_memset.c\
				ft_putstr_fd.c  		ft_strjoin.c\
				ft_strmapi.c			ft_strtrim.c

SRCS_B		=	ft_lstnew.c				ft_lstadd_front.c	ft_lstsize.c\
			 	ft_lstlast.c			ft_lstadd_back.c	ft_lstdelone.c\
			 	ft_lstclear.c			ft_lstiter.c		ft_lstmap.c

HEADER		=	libft.h

OBJ			=	$(patsubst %.c, %.o, $(SRCS))

OBJ_B		=	$(patsubst %.c, %.o, $(SRCS_B))

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

ifdef	WITH_BONUS
	OBJ_FILES = $(OBJ) $(OBJ_B)
else
	OBJ_FILES = $(OBJ)
endif


.PHONY	:	all claen fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ_FILES)
		ar rc $(NAME) $(OBJ_FILES) $?

%.o		:	%.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

bonus	:
		@$(MAKE) WITH_BONUS=1 all 

clean	:
		@rm -f $(OBJ) $(OBJ_B)

fclean	:		clean
		@$(RM) $(NAME)

re		:		fclean all
