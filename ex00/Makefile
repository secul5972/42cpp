CXX = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie
SRCS = main.cpp\
	Zombie.cpp\
	Zombie.hpp\
	newZombie.cpp\
	randomChump.cpp\

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