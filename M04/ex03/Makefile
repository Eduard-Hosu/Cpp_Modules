# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 10:50:39 by ehosu             #+#    #+#              #
#    Updated: 2022/07/27 14:30:23 by ehosu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

HEADERS = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp \
			Character.hpp MateriaSource.hpp
SRCS = AMateria.cpp main.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJS = ${SRCS:.cpp=.o}

RM = rm -rf

CC = c++

CFLAGS = -g -std=c++98 -Wall -Wextra -Werror

all:	$(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) -o $@ $<	

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} $(NAME)

re:	fclean all

.PHONY:
	all clean fclean re