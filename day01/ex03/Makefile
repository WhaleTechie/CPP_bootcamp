# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 19:57:57 by lkrinova          #+#    #+#              #
#    Updated: 2021/10/18 19:58:00 by lkrinova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex03

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 

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