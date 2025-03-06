# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 20:31:33 by jpancorb          #+#    #+#              #
#    Updated: 2025/03/06 20:18:06 by jpancorb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
SRCS	= megaphone.cpp
CFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(CFLAGS) -o $@ $^

%.o: %.c
		c++ $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re