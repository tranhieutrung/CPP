# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 09:34:37 by hitran            #+#    #+#              #
#    Updated: 2025/03/07 12:15:35 by hitran           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= ExecuteForm

SRCS 			=	main.cpp \
					Bureaucrat.cpp	\
					AForm.cpp \
					ShrubberyCreationForm.cpp \
					PresidentialPardonForm.cpp \
					RobotomyRequestForm.cpp
					

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