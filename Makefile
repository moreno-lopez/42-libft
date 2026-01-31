# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: horarivo <horarivo@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/23 21:56:39 by horarivo          #+#    #+#              #
#    Updated: 2026/01/31 18:23:04 by horarivo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c    \
		ft_strlcat.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_isalpha.c \
		ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strnstr.c \
		ft_toupper.c ft_calloc.c ft_isascii.c ft_memchr.c ft_memmove.c \
		ft_strdup.c ft_strlen.c ft_strrchr.c ft_strjoin.c ft_substr.c  \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c   \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c  \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c		   \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c	   \
		ft_lstmap.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
