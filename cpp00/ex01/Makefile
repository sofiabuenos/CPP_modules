NAME = PhoneBook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

#INC = phonebook.hpp contact.hpp header.hpp

SRC = phonebook.cpp contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: all clean fclean re