CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = DiamondTrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all