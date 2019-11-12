# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 11:17:07 by vde-dios          #+#    #+#              #
#    Updated: 2019/11/08 12:04:33 by vde-dios         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlcpy.c 
#SRCS = $(wildcard *.c)


OBJS = ${SRCS:.c=.o}

CC = CC
RM = rm -rf
AR = ar rc
RANLIB = ranlib

CFLAGS = -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):
			${CC} $(CFLAGS) -c $(SRCS)
			$(AR) $(NAME) $(OBJS)
			$(RANLIB) $(NAME)

all:		$(NAME)

clean:
			$(RM) ${OBJS}

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
