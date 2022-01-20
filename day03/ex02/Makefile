CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = FragTrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all