# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 17:15:58 by seungcoh          #+#    #+#              #
#    Updated: 2022/06/26 03:19:12 by secul5972        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = sed
SRCS = main.cpp\

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