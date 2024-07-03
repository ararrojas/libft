# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arojas-a <arojas-a@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 15:15:20 by arojas-a          #+#    #+#              #
#    Updated: 2024/07/03 14:36:39 by arojas-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = libft.h

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
      ft_strdup.c ft_strlen.c ft_tolower.c ft_toupper.c ft_bzero.c \
      ft_memcpy.c ft_strlcat.c ft_strncmp.c ft_memset.c ft_strlcpy.c \
      ft_memmove.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
      ft_memchr.c ft_atoi.c ft_calloc.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS)
	ranlib $(NAME)

%.o: %.c $(INCLUDE) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re
