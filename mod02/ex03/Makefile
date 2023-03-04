# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ulayus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 10:28:52 by ulayus            #+#    #+#              #
#    Updated: 2023/03/04 14:45:43 by ulayus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bsp
SRCS	= main.cpp Fixed.cpp Point.cpp bsp.cpp
CC 		= c++
CFLAGS  = -g -Wall -Wextra -Werror -std=c++98
OBJS    = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
