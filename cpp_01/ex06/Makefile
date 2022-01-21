# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlebard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 22:28:12 by mlebard           #+#    #+#              #
#    Updated: 2022/01/21 03:56:58 by mlebard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME
NAME	=	karenFilter

# DIR
S_DIR	=	srcs/
I_DIR	=	include/
BIN_DIR	=	bin/
O_DIR	=	bin/obj/

# COMPILE
CC		=	c++
CFLAGS	=	-Werror -Wextra -Wall -I$(I_DIR) -std=c++98
LDFLAGS	=
DEPEND	=	$(I_DIR)Karen.hpp

#SRCS
SOURCES	=	main.cpp \
			Karen.cpp
SRCS	=	$(addprefix $(S_DIR), $(SOURCES))

#OBJS
OBJECTS	=	$(SOURCES:.cpp=.opp)
OBJS	=	$(addprefix $(O_DIR), $(OBJECTS))

all				:
				@echo "Building $(NAME):"
				@make --no-print-directory $(NAME)

$(NAME)			:	$(OBJS)
				@echo "Linking $(NAME)..."
				@$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)
				@echo "$(NAME) built successfully!"

$(OBJS)			:	$(O_DIR)%.opp: $(S_DIR)%.cpp $(DEPEND)
				@echo "Compiling $<"
				@mkdir -p $(@D)
				@$(CC) $(CFLAGS) -c $< -o $@

clean			:
				@echo "$(NAME): cleaning objs"
				rm -r -f $(BIN_DIR)

fclean			:	clean
				@echo "$(NAME): cleaning binary"
				rm -r -f $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re
