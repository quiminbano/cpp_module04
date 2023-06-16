# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corellan <corellan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 10:37:08 by corellan          #+#    #+#              #
#    Updated: 2023/06/16 15:52:29 by corellan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materias

TEST1 = test1

TEST2 = test2

SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaList.cpp \
MateriaSource.cpp main.cpp

SRC2 = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaList.cpp \
MateriaSource.cpp main2.cpp

SRC3 = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaList.cpp \
MateriaSource.cpp main3.cpp

OBJ = $(SRC:.cpp=.o)

OBJ2 = $(SRC2:.cpp=.o)

OBJ3 = $(SRC3:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RED = \033[0;31m

GREEN = \033[0;32m

YELLOW = \033[0;33m

NC = \033[0m

all: $(NAME)

$(NAME) : $(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN)The binary was created successfully$(NC)"

$(TEST1) : $(OBJ2)
		@$(CC) $(FLAGS) $(OBJ2) -o $(TEST1)
		@echo "$(GREEN)The binary was created successfully$(NC)"

$(TEST2) : $(OBJ3)
		@$(CC) $(FLAGS) $(OBJ3) -o $(TEST2)
		@echo "$(GREEN)The binary was created successfully$(NC)"

%.o: %.cpp
		@$(CC) $(FLAGS) -I. -c $< -o $@
		@echo "$(GREEN)Object file created.$(NC)"

clean:
		@rm -f $(OBJ) $(OBJ2) $(OBJ3)
		@echo "$(RED)Object files deleted$(NC)"

fclean: clean
		@rm -rf $(NAME) $(TEST1) $(TEST2)
		@echo "$(RED)The binary was deleted successfully$(NC)"

re: fclean all

