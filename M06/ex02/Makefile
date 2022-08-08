# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 17:41:39 by ehosu             #+#    #+#              #
#    Updated: 2022/08/08 13:30:58 by ehosu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

HEADERS = Base.hpp

SRCS = main.cpp Helpers.cpp

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