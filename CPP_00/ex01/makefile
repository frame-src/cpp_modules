NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SDIR = src
ODIR = obj

SRC = ./src/phonebook.cpp ./src/main.cpp ./src/phonebook.cpp\

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