# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 11:26:23 by wdaoudi-          #+#    #+#              #
#    Updated: 2024/06/17 13:02:47 by wdaoudi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =     write.c printf.c \

OBJS            = $(SRCS:.c=.o)

CC                = cc -c
RM                = rm -f
CFLAGS            = -Wall -Wextra -Werror

NAME            = libtfprintf.a

all:            $(NAME)

$(NAME):        $(OBJS)
                ar rcs $(NAME) $(OBJS)

clean:
                $(RM) $(OBJS)

fclean:            clean
                $(RM) $(NAME)

re:                fclean $(NAME)

.PHONY:            all clean fclean re