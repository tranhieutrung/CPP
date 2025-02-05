# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 22:37:53 by hitran            #+#    #+#              #
#    Updated: 2025/02/05 15:01:47 by hitran           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= DiamondTrap

SRCS 			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

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