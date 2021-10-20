# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 19:30:32 by lkrinova          #+#    #+#              #
#    Updated: 2021/10/18 19:30:36 by lkrinova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = Zombie.cpp main.cpp ZombieHorde.cpp 

OBJECTS =$(SOURCES:.cpp=.o)

all: $(NAME)

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

$(NAME):$(OBJECTS)
		$(CC) $(FLAGS) $(SOURCES) -o $(NAME)

clean:
		rm -f $(OBJECTS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

