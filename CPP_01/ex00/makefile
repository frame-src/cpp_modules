NAME = zombie

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SDIR = src

SRC = ./src/main.cpp \
	  ./src/newZombie.cpp \
	  ./src/randomChump.cpp \
	  ./src/Zombie.cpp

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