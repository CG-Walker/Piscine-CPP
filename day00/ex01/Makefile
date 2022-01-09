CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror

NAME = PhoneBook
SRC = main.cpp PhoneBook.cpp Contact.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all