# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/22 18:29:44 by lkrinova          #+#    #+#              #
#    Updated: 2021/10/22 18:29:47 by lkrinova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed_point

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp Fixed.cpp

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
