# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abary <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 12:31:57 by abary             #+#    #+#              #
#    Updated: 2015/11/25 20:59:23 by abary            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

CC = gcc

SRC = sources/ft_strlen.c\
		sources/ft_strstr.c\
		sources/ft_strcpy.c\
		sources/ft_strdup.c\
		sources/ft_strcat.c\
		sources/ft_strcmp.c\
		sources/ft_strncpy.c\
		sources/ft_strncat.c\
		sources/ft_strlcat.c\
		sources/ft_strchr.c\
		sources/ft_strrchr.c\
		sources/ft_strnstr.c\
		sources/ft_strncmp.c\
		sources/ft_atoi.c\
		sources/ft_isalpha.c\
		sources/ft_isdigit.c\
		sources/ft_isalnum.c\
		sources/ft_isascii.c\
		sources/ft_isprint.c\
		sources/ft_toupper.c\
		sources/ft_tolower.c\
		sources/ft_memset.c\
		sources/ft_bzero.c\
		sources/ft_memcpy.c\
		sources/ft_memccpy.c\
		sources/ft_memmove.c\
		sources/ft_memchr.c\
		sources/ft_memcmp.c\
		sources/ft_putchar.c\
		sources/ft_putstr.c\
		sources/ft_memdel.c\
		sources/ft_strnew.c\
		sources/ft_strdel.c\
		sources/ft_strclr.c\
		sources/ft_striter.c\
		sources/ft_striteri.c\
		sources/ft_strmap.c\
		sources/ft_strmapi.c\
		sources/ft_strequ.c\
		sources/ft_strnequ.c\
		sources/ft_strsub.c\
		sources/ft_strjoin.c\
		sources/ft_strtrim.c\
		sources/ft_strsplit.c\
		sources/ft_itoa.c

OBJ = $(SRC:.c=.o)

OBJET = sources/ft_strlen.o\
		sources/ft_strstr.o\
		sources/ft_strcpy.o\
		sources/ft_strdup.o\
		sources/ft_strcat.o\
		sources/ft_strcmp.o\
		sources/ft_strncpy.o\
		sources/ft_strncat.o\
		sources/ft_strlcat.o\
		sources/ft_strchr.o\
		sources/ft_strrchr.o\
		sources/ft_strnstr.o\
		sources/ft_strncmp.o\
		sources/ft_atoi.o\
		sources/ft_isalpha.o\
		sources/ft_isdigit.o\
		sources/ft_isalnum.o\
		sources/ft_isascii.o\
		sources/ft_isprint.o\
		sources/ft_toupper.o\
		sources/ft_tolower.o\
		sources/ft_memset.o\
		sources/ft_bzero.o\
		sources/ft_memcpy.o\
		sources/ft_memccpy.o\
		sources/ft_memmove.o\
		sources/ft_memchr.o\
		sources/ft_memcmp.o\
		sources/ft_putchar.o\
		sources/ft_putstr.o\
		sources/ft_memdel.o\
		sources/ft_strnew.o\
		sources/ft_strdel.o\
		sources/ft_strclr.o\
		sources/ft_striter.o\
		sources/ft_striteri.o\
		sources/ft_strmap.o\
		sources/ft_strmapi.o\
		sources/ft_strequ.o\
		sources/ft_strnequ.o\
		sources/ft_strsub.o\
		sources/ft_strjoin.o\
		sources/ft_strtrim.o\
		sources/ft_strsplit.o\
		sources/ft_itoa.o


HEADERS = includes/libft.h

$(NAME) : $(OBJ)
	ar -rv libft.a $(OBJET)
	$(CC) -I -Wall -Werror -Wextra $(HEADERS) main.c libft.a

all :

clean :
	rm -rf $(OBJET)

fclean :

re :

