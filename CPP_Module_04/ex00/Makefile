# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 10:08:18 by mghalmi           #+#    #+#              #
#    Updated: 2023/10/02 11:33:36 by mghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= Polymorphism
SRC  	= Animal.cpp      Cat.cpp         Dog.cpp         WrongAnimal.cpp WrongCat.cpp    main.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 
RM		= rm -rf

GREEN	= \e[92;5;118m
YELLOW	= \e[93;5;226m
GRAY	= \e[33;2;37m
RESET	= \e[0m

.PHONY: all clean re

all: $(NAME)

$(NAME): $(SRC) Animal.hpp      Cat.hpp         Dog.hpp         WrongAnimal.hpp WrongCat.hpp
	@printf "$(GRAY) - Compiling $(NAME)... $(RESET)\n"
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)
	@printf "$(GREEN) - Executable ready.\n$(RESET)"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW) - Executable removed.$(RESET)\n"

fclean:
	@$(RM) $(NAME)
	@printf "$(YELLOW) - Executable removed.$(RESET)\n"

re: clean all
