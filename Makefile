# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 11:26:23 by wdaoudi-          #+#    #+#              #
#    Updated: 2024/06/19 14:37:44 by wdaoudi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c write.c write2.c
OBJS = ${SRCS:.c=.o}
HEADER = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

${NAME}: ${OBJS}
	@ar -rcs ${NAME} ${OBJS}

%.o: %.c
	@${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}

all: ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
