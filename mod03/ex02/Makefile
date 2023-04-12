# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ulayus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 10:28:52 by ulayus            #+#    #+#              #
#    Updated: 2023/04/04 10:59:50 by ulayus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fragtrap
SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
CXX 		= c++
CFLAGS  = -g -Wall -Wextra -Werror -std=c++98
OBJS    = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

.cpp.o:
	$(CXX) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
