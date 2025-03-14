# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 18:34:57 by dsarmien          #+#    #+#              #
#    Updated: 2024/10/17 15:22:54 by dsarmien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Instructions
NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

# C Source Files
SRC_MAN	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		  ft_putendl_fd.c ft_putnbr_fd.c
SRC_BON = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Object Files
OBJ_MAN	= $(SRC_MAN:.c=.o)
OBJ_BON	= $(SRC_BON:.c=.o)

# Compiler Rules
all: $(NAME)
		$(info [✔] File '$(NAME)' created.)

$(NAME): $(OBJ_MAN) 
		@$(AR) $(NAME) $(OBJ_MAN)
		$(info [^] Mandatory functions compiled.)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@
		$(info [✦] File '$<' compiled.)

bonus: $(OBJ_MAN) $(OBJ_BON)
		@$(AR) $(NAME) $(OBJ_MAN) $(OBJ_BON)
		$(info [^] Bonus functions compiled.)

clean:
		@$(RM) $(OBJ_MAN) $(OBJ_BON)
		$(info [!] Object files deleted.)

fclean: clean
		@$(RM) $(NAME)
		$(info [✘] File '$(NAME)' deleted.)

re:		fclean all

.PHONY: all bonus clean fclean re