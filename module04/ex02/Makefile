# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: claprand <claprand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 13:51:48 by claprand          #+#    #+#              #
#    Updated: 2025/01/31 11:30:03 by claprand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


DEF_COLOR		= \033[0;39m
GREY			= \033[0;90m
RED				= \033[0;91m
GREEN			= \033[0;92m
YELLOW			= \033[0;93m
BLUE			= \033[0;94m
MAGENTA			= \033[0;95m
CYAN			= \033[0;96m
WHITE			= \033[0;97m
ORANGE			= \033[38;5;214m

NAME			= Classe_abstraite
CC				= c++
FLAGS			= -Wall -Werror -Wextra -std=c++98
INCLUDES		= -I ./includes
RM				= rm -rf
VALGRINDCF		= valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

SRC_FUNCTIONS	= main Animal Dog Cat WrongCat WrongAnimal Brain
OBJ_DIR			= obj/
SRC_DIR			= srcs/
SRC				= $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FUNCTIONS)))
OBJ				= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FUNCTIONS)))

IFMAKE_DIR		= .cache_exists

all:			$(NAME)

$(IFMAKE_DIR):
					@mkdir -p $(OBJ_DIR)
					
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(IFMAKE_DIR)
					@echo "$(ORANGE)Loading... $< $(DEF_COLOR)"
					@$(CC) $(FLAGS) -c $< -o $@ $(INCLUDES)
					
$(NAME):		$(OBJ)
					@echo "$(GREY)Compiling Classe abstraite$(DEF_COLOR)"
					@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(INCLUDES)
					@echo "$(GREEN)Classe abstraite ready.$(DEF_COLOR)"

clean:
					@echo "$(MAGENTA)Classe abstraite objects files cleaned!$(DEF_COLOR)"
					@$(RM) $(OBJ_DIR)
					
fclean:			clean
					@echo "$(RED)Classe abstraite removed.$(DEF_COLOR)"
					@$(RM) $(NAME)

re:				fclean all
					@echo "$(BLUE)Cleaned and rebuilt everything for Classe abstraite $(DEF_COLOR)"

vcf:			$(NAME)
					$(VALGRINDCF) ./$(NAME)

.PHONY: all clean fclean re vcf