# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 12:50:23 by ahaavist          #+#    #+#              #
#    Updated: 2022/02/19 04:12:35 by ahaavist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_isprint.c ft_lstiter.c ft_memchr.c ft_memset.c ft_putstr.c \
      ft_strcmp.c ft_strlcat.c ft_strncat.c ft_strnstr.c ft_strtrim.c \
      ft_putendl_fd.c ft_isalnum.c ft_itoa.c ft_lstmap.c ft_memcmp.c ft_putstr_fd.c \
	  ft_strequ.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_putnbr.c \
	  ft_isalpha.c ft_lstadd.c ft_lstnew.c ft_memcpy.c ft_putchar.c ft_strcat.c \
	  ft_strcpy.c ft_striter.c ft_strncpy.c ft_strsplit.c ft_toupper.c ft_putnbr_fd.c \
	  ft_isascii.c ft_lstdel.c ft_memalloc.c ft_memdel.c ft_putchar_fd.c ft_strchr.c \
	  ft_strdel.c ft_striteri.c ft_strmap.c ft_strnequ.c ft_strstr.c ft_atoi.c ft_isdigit.c \
	  ft_lstdelone.c ft_memccpy.c ft_memmove.c ft_putendl.c ft_strclr.c ft_strdup.c \
	  ft_strjoin.c ft_strmapi.c ft_strnew.c ft_strsub.c ft_isspace.c ft_free_strptr.c ft_free_list.c

HEADERS = libft.h

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) $(HEADERS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME) $(NAME:.a=.h.gch) $(NAME:.a=.so)

re: fclean all

so:
	clang -Wall -Wextra -Werror -c -fPIC $(SRC) $(HEADERS)
	clang -shared -o $(NAME:.a=.so) $(OBJS)