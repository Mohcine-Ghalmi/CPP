# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 21:04:43 by mghalmi           #+#    #+#              #
#    Updated: 2023/09/23 22:39:37 by sleeps           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= Now_we’re_talking
SRC  	= main.cpp Fixed.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

GREEN	= \e[92;5;118m
YELLOW	= \e[93;5;226m
GRAY	= \e[33;2;37m
RESET	= \e[0m

.PHONY: all clean re

all: $(NAME)

$(NAME): $(SRC) Fixed.hpp
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
