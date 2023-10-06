# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 10:08:18 by mghalmi           #+#    #+#              #
#    Updated: 2023/10/05 16:39:59 by mghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= Interface
SRC  	= Amateria.cpp  Character.cpp Cure.cpp  Ice.cpp  MateriaSource.cpp main.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 #  -fsanitize=address -g
RM		= rm -rf

GREEN	= \e[92;5;118m
YELLOW	= \e[93;5;226m
GRAY	= \e[33;2;37m
RESET	= \e[0m

.PHONY: all clean re

all: $(NAME)

$(NAME): $(SRC) Amateria.hpp Character.hpp Cure.hpp  Ice.hpp Icharacter.hpp ImateriaSource.hpp MateriaSource.hpp
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
