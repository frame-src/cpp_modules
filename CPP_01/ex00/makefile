NAME = zombie

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SDIR = src
ODIR = obj

SRC = ./src/main.cpp \
	  ./src/newZombie.cpp \
	  ./src/randomChump.cpp \
	  ./src/Zombie.cpp

OBJ = $(SRC:.cpp=.o)

.ccp.o:
	$(CC) $(FLAGS) $< - o $(<:.cpp=.o)

$(NAME): $(OBJ) $(SRC)
	$(CC) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re