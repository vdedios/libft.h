# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 11:17:07 by vde-dios          #+#    #+#              #
#    Updated: 2019/11/19 15:43:43 by vde-dios         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft.a

HEADER	=	libft.h

SRCS	=	ft_memset.c				\
			ft_bzero.c				\
			ft_memcpy.c				\
			ft_memccpy.c			\
			ft_memmove.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_strlen.c				\
			ft_strlcpy.c			\
			ft_strlcat.c			\
			ft_strchr.c				\
			ft_strrchr.c			\
			ft_strnstr.c			\
			ft_strncmp.c			\
			ft_atoi.c				\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_isdigit.c			\
			ft_isprint.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_calloc.c				\
			ft_strdup.c				\
			ft_substr.c				\
			ft_strjoin.c			\
			ft_strtrim.c			\
			ft_split.c				\
			ft_itoa.c				\
			ft_strmapi.c			\
			ft_putchar_fd.c			\
			ft_putstr_fd.c			\
			ft_putendl_fd.c			\
			ft_putnbr_fd.c			\
			ft_lstnew_bonus.c		\
			ft_lstadd_front_bonus.c	\
			ft_lstsize_bonus.c		\
			ft_lstlast_bonus.c		\
			ft_lstadd_back_bonus.c	\
			ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c		\
			ft_lstiter_bonus.c		\
			ft_lstmap_bonus.c		\

OBJS	= 	$(SRCS:.c=.o)

all		: 	$(NAME)

$(NAME)	:	$(OBJS)
		@ar -rcs $(NAME) $(OBJS)
		@echo "\033[90m[\033[32mLibft\033[90m]\033[32m Successfully compiled Libft.\033[0m"

bonus	:	$(OBJS)
		ar -rcs $(NAME) $(OBJS)

%.o		:	%.c$(HEADER)
		@gcc -Wall -Wextra -Werror -o $@ -c $< -I $(HEADER)
		@echo "\033[90m[\033[32mLibft\033[90m]\033[34m Compiling $<\033[0m"

clean	:
		@/bin/rm -f $(OBJS)
		@echo "\033[90m[\033[91mLibft\033[90m]\033[31m Object files deleted\033[0m"

fclean	:	clean
		@/bin/rm -f $(NAME)
		@echo "\033[90m[\033[91mLibft\033[90m]\033[31m Libft.a deleted.\033[0m"

re		: 	fclean all
