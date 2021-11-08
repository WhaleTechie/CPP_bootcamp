# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 19:11:12 by lkrinova          #+#    #+#              #
#    Updated: 2021/11/06 19:11:12 by lkrinova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01
CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJECTS =$(SOURCES:.cpp=.o)

all: $(NAME)

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

$(NAME):$(OBJECTS)
		$(CC) $(FLAGS) $(SOURCES) -I. -o $(NAME)

clean:
		rm -f $(OBJECTS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re