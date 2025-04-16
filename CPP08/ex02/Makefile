# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 14:32:25 by hitran            #+#    #+#              #
#    Updated: 2025/04/16 12:11:52 by hitran           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			=	Span

SRCS 			=	main.cpp

OBJS			=	$(SRCS:.cpp=.o)

RM				=	rm -rf

# Compiler and flags
CC 				=	g++
CFLAGS 			=	-Wall -Wextra -Werror -std=c++20 -I .

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