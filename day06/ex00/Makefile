CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror

NAME = Numbers
SRC = main.cpp Numbers.cpp
all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all