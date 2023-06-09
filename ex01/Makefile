# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corellan <corellan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 10:37:08 by corellan          #+#    #+#              #
#    Updated: 2023/06/09 18:33:41 by corellan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brains

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
		$(CC) $(FLAGS) -I. -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

