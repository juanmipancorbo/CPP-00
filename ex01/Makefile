# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 17:09:34 by jpancorb          #+#    #+#              #
#    Updated: 2025/03/13 20:07:49 by jpancorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= felipe_phonebook
SRCS	= main.cpp PhoneBook.cpp Contact.cpp
HEADERS	= PhoneBook.hpp Contact.hpp
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(CFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
		c++ $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re