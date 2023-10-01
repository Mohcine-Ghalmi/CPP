# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 18:31:43 by mghalmi           #+#    #+#              #
#    Updated: 2023/09/30 17:03:26 by sleeps           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= Now_it’s_weird!
SRC  	= ClapTrap.cpp  DiamondTrap.cpp  FragTrap.cpp  ScavTrap.cpp  main.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

GREEN	= \e[92;5;118m
YELLOW	= \e[93;5;226m
GRAY	= \e[33;2;37m
RESET	= \e[0m

.PHONY: all clean re

all: $(NAME)

$(NAME): $(SRC) ClapTrap.hpp  DiamondTrap.hpp  FragTrap.hpp  ScavTrap.hpp
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
