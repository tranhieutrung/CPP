# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/13 13:38:52 by hitran            #+#    #+#              #
#    Updated: 2025/01/14 21:49:07 by hitran           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= Weapon

SRCS 			= main.cpp Weapon.cpp HumanA.cpp  HumanB.cpp

OBJS			= $(SRCS:.cpp=.o)

RM				= rm -rf

# Compiler and flags
CC 				= g++
CFLAGS 			= -Wall -Wextra -Werror -std=c++20 -I .

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re