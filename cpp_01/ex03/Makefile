# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlebard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 22:28:12 by mlebard           #+#    #+#              #
#    Updated: 2022/01/20 22:37:41 by mlebard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME
NAME	=	WeaponsForHumanity

# DIR
S_DIR	=	srcs/
I_DIR	=	include/
BIN_DIR	=	bin/
O_DIR	=	bin/obj/

# COMPILE
CC		=	c++
CFLAGS	=	-Werror -Wextra -Wall -I$(I_DIR)
LDFLAGS	=
DEPEND	=	$(I_DIR)Weapon.hpp $(I_DIR)HumanA.hpp $(I_DIR)HumanB.hpp

#SRCS
SOURCES	=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp
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
