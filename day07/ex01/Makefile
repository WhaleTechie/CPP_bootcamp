# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 15:37:58 by lkrinova          #+#    #+#              #
#    Updated: 2021/11/24 15:37:58 by lkrinova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NONE		=	\033[0;0m
RED			=	\033[0;31m
GREEN		=	\033[0;32m
PURPLE		=	\033[0;35m

NAME	=	iter
CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp

OBJECTS =$(SOURCES:.cpp=.o)

all: $(NAME)

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

$(NAME):$(OBJECTS)
		$(CC) $(FLAGS) $(SOURCES) -I. -o $(NAME)
		@echo "$(PURPLE)$(NAME) has been created $(NONE)"
clean:
		rm -f $(OBJECTS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re