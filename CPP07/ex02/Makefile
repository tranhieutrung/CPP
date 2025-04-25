# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 14:32:25 by hitran            #+#    #+#              #
#    Updated: 2025/04/25 10:22:05 by hitran           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			=	array

SRCS 			=	main.cpp

OBJS			=	$(SRCS:.cpp=.o)

RM				=	rm -rf

# Compiler and flags
CC 				=	c++
CFLAGS 			=	-Wall -Wextra -Werror -std=c++98 -I .

# Targets
all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re