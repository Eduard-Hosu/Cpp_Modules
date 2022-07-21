# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 10:50:39 by ehosu             #+#    #+#              #
#    Updated: 2022/07/08 13:35:13 by ehosu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

HEADERS = ClapTrap.hpp
SRCS = main.cpp ClapTrap.cpp

OBJS = ${SRCS:.cpp=.o}

RM = rm -rf

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

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