CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = exec
SRC = tests.cpp Account.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all