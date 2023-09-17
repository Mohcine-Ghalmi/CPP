# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 22:59:31 by mghalmi           #+#    #+#              #
#    Updated: 2023/09/16 23:00:11 by mghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=   Unnecessary_violence
SRC  	= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

GREEN	= \e[92;5;118m
YELLOW	= \e[93;5;226m
GRAY	= \e[33;2;37m
RESET	= \e[0m

.PHONY: all clean re

all: $(NAME)

$(NAME): $(SRC) HumanA.hpp HumanB.hpp Weapon.hpp
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