# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlambert <rlambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 11:25:08 by rlambert          #+#    #+#              #
#    Updated: 2015/10/28 14:16:38 by roblabla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS += -Wall -Wextra -Werror -Iinclude/

SRCS = ft_memset.c \
	   ft_bzero.c \
	   ft_strlen.c \
	   ft_nstrlen.c \
	   ft_strchr.c \
	   ft_isdigit.c \
	   ft_tolower.c \
	   ft_memalloc.c \
	   ft_putchar.c \
	   ft_putwchar.c \
	   ft_putstr.c \
	   ft_putnstr.c \
	   ft_putnbrbase.c \
	   ft_putchar_fd.c \
	   ft_putwchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putnstr_fd.c \
	   ft_putnbrbase_fd.c \
	   ft_max.c \

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $?

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
