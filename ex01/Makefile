# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corellan <corellan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 10:37:08 by corellan          #+#    #+#              #
#    Updated: 2023/06/17 13:17:33 by corellan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brains

TEST = test

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

SRC2 = Animal.cpp Cat.cpp Dog.cpp main2.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

OBJ2 = $(SRC2:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RED = \033[0;31m

GREEN = \033[0;32m

YELLOW = \033[0;33m

NC = \033[0m

all: $(NAME)

try: $(TEST)

$(NAME) : $(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN)The binary was created successfully$(NC)"

$(TEST) : $(OBJ2)
		@$(CC) $(FLAGS) $(OBJ2) -o $(TEST)
		@echo "$(GREEN)The binary was created successfully$(NC)"

%.o: %.cpp
		@$(CC) $(FLAGS) -I. -c $< -o $@
		@echo "$(GREEN)Object file created.$(NC)"

clean:
		@rm -f $(OBJ) $(OBJ2)
		@echo "$(RED)Object files deleted$(NC)"

fclean: clean
		@rm -rf $(NAME) $(TEST)
		@echo "$(RED)The binary was deleted successfully$(NC)"

re: fclean all

