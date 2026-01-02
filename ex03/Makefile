SRC = HumanA.cpp  HumanB.cpp  main.cpp  Weapon.cpp

OBJ = $(SRC:.cpp=.o)

NAME = UnnecessaryVoilence

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
