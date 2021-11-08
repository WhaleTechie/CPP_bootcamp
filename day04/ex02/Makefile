# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrinova <lkrinova@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 17:48:42 by lkrinova          #+#    #+#              #
#    Updated: 2021/11/08 17:48:42 by lkrinova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex02
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