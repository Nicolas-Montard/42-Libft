# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 15:10:14 by nmontard          #+#    #+#              #
#    Updated: 2025/11/17 12:25:29 by nmontard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -Wall -Wextra -Werror
CFILES = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_memcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_memmove.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
CBONUSFILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJECTS = $(CFILES:.c=.o)
BONUSOBJECTS = $(CBONUSFILES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJECTS) libft.h
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(DFLAGS) -c $^ -o $@

bonus: $(NAME) $(BONUSOBJECTS)
	ar rcs $(NAME) $(BONUSOBJECTS)

clean:
	rm -f $(OBJECTS) $(BONUSOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus