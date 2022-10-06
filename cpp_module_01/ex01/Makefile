# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 17:15:51 by seungcoh          #+#    #+#              #
#    Updated: 2022/05/07 17:16:07 by seungcoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie
SRCS = main.cpp\
	Zombie.cpp\
	zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all: 		$(NAME)

$(NAME): 	$(OBJS)
			$(CXX) $(CFLAGS) -o $(NAME) $(OBJS)
clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re