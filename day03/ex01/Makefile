CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ScavTrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all