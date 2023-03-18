# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ulayus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 10:28:52 by ulayus            #+#    #+#              #
#    Updated: 2023/03/18 19:56:41 by ulayus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= form
SRCS	= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp
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
