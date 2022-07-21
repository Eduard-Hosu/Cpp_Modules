# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 10:50:39 by ehosu             #+#    #+#              #
#    Updated: 2022/05/21 11:39:33 by ehosu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

HEADERS = PhoneBook.class.cpp Contact.class.cpp main.cpp

SRCS = main.cpp PhoneBook.class.cpp Contact.class.cpp

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