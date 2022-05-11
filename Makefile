# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 15:32:16 by nlafarge          #+#    #+#              #
#    Updated: 2022/05/11 18:38:11 by nlafarge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = c-env-lib
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

ENV 	= 	srcs/ft_parse_env_var.c \
			srcs/ft_get_env_var.c \
			srcs/ft_print_env_var.c \
			srcs/ft_clean_env_var.c \
			srcs/ft_init_env_var.c

SRCS = srcs/main.c \
		${ENV} \
		srcs/lib.c

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:
	make ${NAME}

${NAME}: ${OBJS} srcs/env.h
		${CC} -o ${NAME} ${OBJS} ${CFLAGS}

clean:
	${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY: clean all fclean re