CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror

NAME = Karen
SRC = main.cpp Karen.cpp
all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all