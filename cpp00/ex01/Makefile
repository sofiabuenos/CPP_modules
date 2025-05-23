NAME = PhoneBook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

INC = phonebook.hpp

SRC = phonebook.cpp definitions.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: all clean fclean re