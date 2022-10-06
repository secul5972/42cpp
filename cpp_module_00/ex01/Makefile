# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungcoh <seungcoh@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/12 14:12:53 by seungcoh          #+#    #+#              #
#    Updated: 2022/04/30 19:49:37 by seungcoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = MyAwesomePhoneBook
SRCS = Contract.cpp\
		ExtraFun.cpp\
		main.cpp\
		PhoneBook.cpp
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
