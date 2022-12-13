NAME = animals

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SDIR = src

SRC =	./src/Animal.cpp ./src/Dog.cpp \
		./src/WrongAnimal.cpp ./src/WrongCat.cpp \
		./src/Cat.cpp ./src/main.cpp

OBJ = $(SRC:.cpp=.o)

%.o: $(SDIR)%.cpp
	$(CC) $(FLAGS) $^ -c

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $^ -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re