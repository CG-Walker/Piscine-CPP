CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror

NAME = Array
SRC = main.cpp
all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all