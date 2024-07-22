NAME = FragTrap

SRC = main.cpp ClapTrap.cpp colors.cpp ScavTrap.cpp FragTrap.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

CC = cc
CXX = c++

CFLAGS = -Wall -Wextra -Werror -MMD -MP
CXXFLAGS = $(CFLAGS) --std=c++98

RM = rm -f

all : $(NAME)

$(NAME) : ${OBJ} Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) -g3 $(OBJ)

clean :
	$(RM) $(NAME) $(OBJ) $(DEPS)

fclean : clean
	$(RM) $(NAME)

-include $(DEPS)

re : fclean all

.PHONY : all clean fclean re
